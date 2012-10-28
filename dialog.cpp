#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->SecondaryGroupBox->hide();
    ui->TertiaryGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);

}
void Dialog::setgroupboxvalues(QChar firstvalue, QChar lastvalue)
{
    ui->PrimaryColumnCombo->setMinimumSize(ui->SecondayColumnCombo->sizeHint());
    QChar ch=firstvalue;
    while(ch<=lastvalue)
    {
        ui->PrimaryColumnCombo->addItem(QString(ch));
        ui->SecondayColumnCombo->addItem(QString(ch));
        ui->TertiaryColumnCombo->addItem(QString(ch));
        ch=ch.unicode()+1;
    }
}

Dialog::~Dialog()
{
    delete ui;
}
