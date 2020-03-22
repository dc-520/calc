#ifndef EXPR_H
#define EXPR_H

#include <QDialog>
#include "model.h"
#include <QString>

namespace Ui {
class expr;
}

class expr : public QDialog
{
    Q_OBJECT

public:
    explicit expr(QWidget *parent = 0);
    ~expr();

private slots:
    void getbtn_0();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_plus_clicked();

    void on_btn_sub_clicked();

    void on_btn_multi_clicked();

    void on_btn_div_clicked();

    void on_btn_equal_clicked();

    void on_btn_clr_clicked();

private:
    Ui::expr *ui;   //界面对象
    model * mode;  //核心功能对象
    QString temp;
};

#endif // EXPR_H
