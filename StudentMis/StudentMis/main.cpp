#include "studentdlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StudentDlg w;
    w.show();
    return a.exec();
}
