#include "qtfalse.h"
#include "ui_qtfalse.h"

QtFalse::QtFalse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QtFalse)
{
    ui->setupUi(this);
}

QtFalse::~QtFalse()
{
    delete ui;
}
