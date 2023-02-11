/********************************************************************************
** Form generated from reading UI file 'studentdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDLG_H
#define UI_STUDENTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDlg
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxValue;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox_sort;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sort_Button;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *number_lineEdit;
    QLabel *label_2;
    QLineEdit *name_lineEdit;
    QLabel *label_3;
    QLineEdit *score_lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *insert_Button;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *delete_Button;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *update_Button;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *inquire_Button;

    void setupUi(QDialog *StudentDlg)
    {
        if (StudentDlg->objectName().isEmpty())
            StudentDlg->setObjectName(QString::fromUtf8("StudentDlg"));
        StudentDlg->resize(480, 283);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/student.png"), QSize(), QIcon::Normal, QIcon::Off);
        StudentDlg->setWindowIcon(icon);
        layoutWidget = new QWidget(StudentDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 480, 282));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxValue = new QComboBox(layoutWidget);
        comboBoxValue->addItem(QString());
        comboBoxValue->addItem(QString());
        comboBoxValue->setObjectName(QString::fromUtf8("comboBoxValue"));

        horizontalLayout->addWidget(comboBoxValue);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox_sort = new QComboBox(layoutWidget);
        comboBox_sort->addItem(QString());
        comboBox_sort->addItem(QString());
        comboBox_sort->setObjectName(QString::fromUtf8("comboBox_sort"));

        horizontalLayout->addWidget(comboBox_sort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        sort_Button = new QPushButton(layoutWidget);
        sort_Button->setObjectName(QString::fromUtf8("sort_Button"));

        horizontalLayout->addWidget(sort_Button);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(layoutWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        number_lineEdit = new QLineEdit(layoutWidget);
        number_lineEdit->setObjectName(QString::fromUtf8("number_lineEdit"));

        horizontalLayout_2->addWidget(number_lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        name_lineEdit = new QLineEdit(layoutWidget);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        horizontalLayout_2->addWidget(name_lineEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        score_lineEdit = new QLineEdit(layoutWidget);
        score_lineEdit->setObjectName(QString::fromUtf8("score_lineEdit"));

        horizontalLayout_2->addWidget(score_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        insert_Button = new QPushButton(layoutWidget);
        insert_Button->setObjectName(QString::fromUtf8("insert_Button"));

        horizontalLayout_3->addWidget(insert_Button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        delete_Button = new QPushButton(layoutWidget);
        delete_Button->setObjectName(QString::fromUtf8("delete_Button"));

        horizontalLayout_3->addWidget(delete_Button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        update_Button = new QPushButton(layoutWidget);
        update_Button->setObjectName(QString::fromUtf8("update_Button"));

        horizontalLayout_3->addWidget(update_Button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        inquire_Button = new QPushButton(layoutWidget);
        inquire_Button->setObjectName(QString::fromUtf8("inquire_Button"));

        horizontalLayout_3->addWidget(inquire_Button);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(StudentDlg);

        QMetaObject::connectSlotsByName(StudentDlg);
    } // setupUi

    void retranslateUi(QDialog *StudentDlg)
    {
        StudentDlg->setWindowTitle(QApplication::translate("StudentDlg", "StudentDlg", nullptr));
        comboBoxValue->setItemText(0, QApplication::translate("StudentDlg", "id", nullptr));
        comboBoxValue->setItemText(1, QApplication::translate("StudentDlg", "\346\210\220\347\273\251", nullptr));

        comboBox_sort->setItemText(0, QApplication::translate("StudentDlg", "\345\215\207\345\272\217", nullptr));
        comboBox_sort->setItemText(1, QApplication::translate("StudentDlg", "\351\231\215\345\272\217", nullptr));

        sort_Button->setText(QApplication::translate("StudentDlg", "\346\225\260\346\215\256\346\216\222\345\272\217", nullptr));
        label->setText(QApplication::translate("StudentDlg", "\345\255\246\345\217\267\357\274\232", nullptr));
        label_2->setText(QApplication::translate("StudentDlg", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("StudentDlg", "\346\210\220\347\273\251\357\274\232", nullptr));
        insert_Button->setText(QApplication::translate("StudentDlg", "\346\217\222\345\205\245\346\225\260\346\215\256", nullptr));
        delete_Button->setText(QApplication::translate("StudentDlg", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        update_Button->setText(QApplication::translate("StudentDlg", "\346\233\264\346\226\260\346\225\260\346\215\256", nullptr));
        inquire_Button->setText(QApplication::translate("StudentDlg", "\346\237\245\350\257\242\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentDlg: public Ui_StudentDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDLG_H
