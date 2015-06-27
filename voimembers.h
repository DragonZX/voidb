#ifndef VOIMEMBERS_H
#define VOIMEMBERS_H

#include <QMainWindow>

namespace Ui {
class VOIMembers;
}

class VOIMembers : public QMainWindow
{
    Q_OBJECT

public:
    explicit VOIMembers(QWidget *parent = 0);
    ~VOIMembers();

private:
    Ui::VOIMembers *ui;
};

#endif // VOIMEMBERS_H
