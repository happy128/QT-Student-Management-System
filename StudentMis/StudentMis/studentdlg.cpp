#include "studentdlg.h"
#include "ui_studentdlg.h"

StudentDlg::StudentDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentDlg)
{
    ui->setupUi(this);

    //调用函数创建且打开数据库
    CreateDatabaseFunc();
    on_inquire_Button_clicked();

    //调用函数创建数据表
    //CreateTableFunc();
}

StudentDlg::~StudentDlg()
{
    delete ui;
}
void StudentDlg::CreateDatabaseFunc()  //创建SQLite数据库
{
    //1.添加数据库驱动
    sqldb = QSqlDatabase::addDatabase("QSQLITE");

    //2.设置数据库名称
    sqldb.setDatabaseName("studentmis.db");

    //3.打开此数据库是否成功
    if(sqldb.open()==true)
    {
        QMessageBox::information(0,"正确","恭喜你,数据库打开成功！",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(0,"正确","数据库打开失败！",QMessageBox::Ok);
    }

}
void StudentDlg::CreateTableFunc()     //创建SQLite数据表
{
    QSqlQuery createquery;

    //创建SQL语句
    QString strsql = QString("create table student("
                             "id int primary key not null,"
                             "name text not null,"
                             "score real not null)"
                             );
    //执行SQL语句
    if(createquery.exec(strsql)==false)
    {
        QMessageBox::information(0,"失败","数据表创建失败，请重新检查！",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::critical(0,"成功","恭喜你，数据表创建成功！",QMessageBox::Ok);
    }


}
void StudentDlg::QueryTableFunc()      //执行查询操作
{

}


void StudentDlg::on_sort_Button_clicked()
{
    QSqlTableModel *model;    //数据库模型
    model=new QSqlTableModel; //负责提取数据
    model->setTable("student");//选择要输出的表名称
    int index = ui->comboBox_sort->currentIndex();//获得升序降序索引
    int index1 = ui->comboBoxValue->currentIndex();//获得id成绩索引
    //QString StrIntN=QString::number(index);
    //QMessageBox::information(this, "comboBox", StrIntN, QMessageBox::Ok);
    //qDebug()<<StrIntN;
    if(index == 0)
    {
        if(index1 == 0)  model->setSort(0, Qt::AscendingOrder);
        else model->setSort(2, Qt::AscendingOrder);
    }
    else
    {
        if(index1 == 0)  model->setSort(0, Qt::DescendingOrder);
        else model->setSort(2, Qt::DescendingOrder);
    }

    model->select();
    ui->tableView->setModel(model);

    //参考：https://blog.csdn.net/qq_37529913/article/details/109766009
    //参考：https://blog.csdn.net/qq_29406323/article/details/81355149
}

void StudentDlg::on_insert_Button_clicked()
{
    QSqlQuery sqlquery;
    int id=ui->number_lineEdit->text().toInt();
    if(id==0)
    {
        QMessageBox::critical(this,"失败","学生学号不能为0",QMessageBox::Ok);
        return ;
    }

    QString name=ui->name_lineEdit->text();
    if(name=="")
    {
        QMessageBox::critical(this,"失败","输入错误，姓名不能为空",QMessageBox::Ok);
        return ;
    }

    double score = ui->score_lineEdit->text().toDouble();
    if(score<0 || score>100)
    {
        QMessageBox::critical(this,"失败","输入错误，分数范围在0~100中间",QMessageBox::Ok);
        return ;
    }
    QString strs = QString("insert into student "
                           "values(%1,'%2',%3)").arg(id).arg(name).arg(score);


    if(sqlquery.exec(strs)==false)
    {
        QMessageBox::critical(0,"失败","向数据表插入数据失败，请重新检查！",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(0,"失败","向数据表插入数据成功！",QMessageBox::Ok);
    }
    on_inquire_Button_clicked();
}

void StudentDlg::on_delete_Button_clicked()
{

    QSqlTableModel *model;    //数据库模型
    model=new QSqlTableModel; //负责提取数据
    model->setTable("student");//选择要输出的表名称
    model->select();
    if(ui->number_lineEdit->text().isEmpty())
    {
        int curRow = ui->tableView->currentIndex().row();
        model->removeRow(curRow);
    }
    else
    {
        int id=ui->number_lineEdit->text().toInt();
        model->removeRow(id);
    }

    int ok=QMessageBox::warning(this,tr("删除当前行！"),tr("你确定删除当前行吗？"),
                                QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        model->revertAll();
    }
    else model->submitAll();
    on_inquire_Button_clicked();
}

void StudentDlg::on_inquire_Button_clicked()
{
    if(!(ui->number_lineEdit->text().isEmpty()))//ID不为空，按照ID查询
    {

        int id=ui->number_lineEdit->text().toInt();
        QSqlTableModel *model;    //数据库模型
        model=new QSqlTableModel; //负责提取数据
        model->setTable("student");//选择要输出的表名称
        model->setFilter(QString("id = '%1'").arg(id));
        model->select();
        ui->tableView->setModel(model);

        return ;
    }
    if(!(ui->name_lineEdit->text().isEmpty()))
    {

        QString name=ui->name_lineEdit->text();
        QSqlTableModel *model;    //数据库模型  参考：https://blog.csdn.net/hw5230/article/details/128244349
        model=new QSqlTableModel; //负责提取数据
        model->setTable("student");//选择要输出的表名称
        model->setFilter(QString("name = '%1'").arg(name));
        model->select();
        ui->tableView->setModel(model);

        return ;
    }
    if(!(ui->score_lineEdit->text().isEmpty()))
    {

        int score=ui->score_lineEdit->text().toInt();
        QSqlTableModel *model;    //数据库模型
        model=new QSqlTableModel; //负责提取数据
        model->setTable("student");//选择要输出的表名称
        model->setFilter(QString("score = '%1'").arg(score));
        model->select();
        ui->tableView->setModel(model);

        return ;
    }

    QSqlTableModel *model_;    //数据库模型
    model_=new QSqlTableModel; //负责提取数据
    model_->setTable("student");//选择要输出的表名称


    if(model_->select())
    {
           qDebug()<<"model setting success";
    }
    else
    {
           qDebug()<<"model setting fail";
    }
    ui->tableView->setModel(model_);
    //参考：https://blog.csdn.net/weixin_49223760/article/details/125633490

}

void StudentDlg::on_update_Button_clicked()
{
    QSqlQuery sqlquery;
    int id=ui->number_lineEdit->text().toInt();
    if(id==0)
    {
        QMessageBox::critical(this,"失败","学生学号不能为0",QMessageBox::Ok);
        return ;
    }

    QString name=ui->name_lineEdit->text();
    if(name=="")
    {
        QMessageBox::critical(this,"失败","输入错误，姓名不能为空",QMessageBox::Ok);
        return ;
    }

    double score = ui->score_lineEdit->text().toDouble();
    if(score<0 || score>100)
    {
        QMessageBox::critical(this,"失败","输入错误，分数范围在0~100中间",QMessageBox::Ok);
        return ;
    }
    QString strs = QString("update student "
                           "set name='%1',score=%2 where id=%3").arg(name).arg(score).arg(id);

    if(sqlquery.exec(strs)==false)
    {
        QMessageBox::critical(0,"失败","更新数据失败，请重新检查！",QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(0,"失败","更新数据成功！",QMessageBox::Ok);
    }
    on_inquire_Button_clicked();


}
