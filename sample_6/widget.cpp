#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_cal_clicked()
{
    QString str =  ui->line_num->text();
    int num = str.toInt();
    str = ui->line_pri->text();
    float price = str.toFloat();
    float total = num*price;
    str = str.setNum(total,'f',2);
    ui->line_tot->setText(str);
}

void Widget::on_btn_D_clicked()
{
    QString str = ui->line_Dec->text();
    int value = str.toInt();
    str = str.setNum(value,2);
    ui->line_Bin->setText(str);
    str = str.setNum(value,16);
    ui->line_Hex->setText(str.toUpper());
}

void Widget::on_btn_B_clicked()
{
    QString str = ui->line_Bin->text();
    bool ok;
    int value = str.toInt(&ok,2); //Binary to input
    str = str.setNum(value,10);
    ui->line_Dec->setText(str);
    str = str.setNum(value,16);
    ui->line_Hex->setText(str.toUpper());
}

void Widget::on_btn_H_clicked()
{
    QString str = ui->line_Hex->text();
    bool ok;
    int value = str.toInt(&ok,16);
    str = str.setNum(value,10);
    ui->line_Dec->setText(str);
    str =str.setNum(value,2);
    ui->line_Bin->setText(str);
}
