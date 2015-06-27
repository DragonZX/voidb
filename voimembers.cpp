#include "voimembers.h"
#include "ui_voimembers.h"

VOIMembers::VOIMembers(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VOIMembers)
{
    ui->setupUi(this);
}

VOIMembers::~VOIMembers()
{
    delete ui;
}
