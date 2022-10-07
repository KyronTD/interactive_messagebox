#include "widget.h"
#include "./ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    //Display Text Edit
    qDebug() << "Text Edit 1 output =" << ui->textEdit->toPlainText();
}


void Widget::on_pushButton_2_clicked()
{
    //Display top four lines of edited text
    qDebug() << "Line Edit 1 output =" << ui->lineEdit->text();
    qDebug() << "Line Edit 2 output =" << ui->lineEdit_2->text();
    qDebug() << "Line Edit 3 output =" << ui->lineEdit_3->text();
    qDebug() << "Line Edit 4 output =" << ui->lineEdit_4->text();

}

