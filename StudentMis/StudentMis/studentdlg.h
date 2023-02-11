#ifndef STUDENTDLG_H
#define STUDENTDLG_H

#include <QDialog>

#include <QSqlDatabase>//连接创建数据库
#include <QSqlQuery>//专门用于DML（数据操纵语言）、DDL（数据定义语言）
#include <QSqlQueryModel>
#include <QSqlError>
#include <QtDebug>
#include <QMessageBox>
#include <QTableView>
#include <QSqlTableModel>


QT_BEGIN_NAMESPACE
namespace Ui { class StudentDlg; }
QT_END_NAMESPACE

class StudentDlg : public QDialog
{
    Q_OBJECT

public:
    StudentDlg(QWidget *parent = nullptr);
    ~StudentDlg();

private slots:

    void on_sort_Button_clicked();

    void on_insert_Button_clicked();

    void on_delete_Button_clicked();

    void on_inquire_Button_clicked();

    void on_update_Button_clicked();


private:  //自定义函数
    void CreateDatabaseFunc();  //创建SQLite数据库
    void CreateTableFunc();     //创建SQLite数据表
    void QueryTableFunc();      //执行查询操作


    QSqlDatabase sqldb;         //创建QT和数据库链接
    QSqlQueryModel sqlmodel;    //存储结果


private:
    Ui::StudentDlg *ui;
};
#endif // STUDENTDLG_H
