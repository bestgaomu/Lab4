#include "departmentview.h"
#include "ui_departmentview.h"

LabView::LabView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LabView)
{
    ui->setupUi(this);
}


