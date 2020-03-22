#include "expr.h"
#include "ui_expr.h"

expr::expr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::expr)
{
    ui->setupUi(this);
    temp = "";
    this->mode = new model;

    connect(this->ui->btn_0,SIGNAL(clicked(bool)),this,SLOT(getbtn_0()));
}

expr::~expr()
{
    delete ui;
}

void expr::getbtn_0()
{
    if(temp != ""){
        temp += this->ui->btn_0->text();
        this->ui->label_display->setText(temp);
    }

}

void expr::on_btn_1_clicked()
{
    temp += this->ui->btn_1->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_2_clicked()
{
    temp += this->ui->btn_2->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_3_clicked()
{
    temp += this->ui->btn_3->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_4_clicked()
{
    temp += this->ui->btn_4->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_5_clicked()
{
    temp += this->ui->btn_5->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_6_clicked()
{
    temp += this->ui->btn_6->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_7_clicked()
{
    temp += this->ui->btn_7->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_8_clicked()
{
    temp += this->ui->btn_8->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_9_clicked()
{
    temp += this->ui->btn_9->text();
    this->ui->label_display->setText(temp);
}

void expr::on_btn_plus_clicked()
{
    mode->set_flag("+");
    mode->set_num1(temp.toInt());
    temp = "";
    ui->label_display->clear();
}

void expr::on_btn_sub_clicked()
{
    mode->set_flag("-");
    mode->set_num1(temp.toInt());
    temp = "";
    ui->label_display->clear();
}

void expr::on_btn_multi_clicked()
{
    mode->set_flag("*");
    mode->set_num1(temp.toInt());
    temp = "";

    //ui->label_display->clear();
}

void expr::on_btn_div_clicked()
{
    mode->set_flag("/");
    mode->set_num1(temp.toInt());
    temp = "";
    ui->label_display->clear();
}

void expr::on_btn_equal_clicked()
{
    mode->set_num2(temp.toInt());
    temp = mode->doExpr();
    ui->label_display->clear();
    ui->label_display->setText(temp);
    mode->set_num1(temp.toInt());
}

void expr::on_btn_clr_clicked()
{
    mode->set_num1(0);
    mode->set_num2(0);
    temp = "";
    ui->label_display->clear();
}
