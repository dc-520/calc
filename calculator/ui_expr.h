/********************************************************************************
** Form generated from reading UI file 'expr.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPR_H
#define UI_EXPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_expr
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_display;
    QGridLayout *gridLayout;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_plus;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_multi;
    QPushButton *btn_clr;
    QPushButton *btn_0;
    QPushButton *btn_equal;
    QPushButton *btn_div;

    void setupUi(QDialog *expr)
    {
        if (expr->objectName().isEmpty())
            expr->setObjectName(QStringLiteral("expr"));
        expr->resize(346, 317);
        expr->setSizeIncrement(QSize(0, 0));
        verticalLayout = new QVBoxLayout(expr);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_display = new QLabel(expr);
        label_display->setObjectName(QStringLiteral("label_display"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_display->setFont(font);
        label_display->setStyleSheet(QLatin1String("background-color: rgb(170, 170, 255);\n"
"font: 36pt \"Arial\";\n"
"color: rgb(0, 85, 127);\n"
""));
        label_display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_7 = new QPushButton(expr);
        btn_7->setObjectName(QStringLiteral("btn_7"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_7, 0, 0, 1, 1);

        btn_8 = new QPushButton(expr);
        btn_8->setObjectName(QStringLiteral("btn_8"));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_8, 0, 1, 1, 1);

        btn_9 = new QPushButton(expr);
        btn_9->setObjectName(QStringLiteral("btn_9"));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_9, 0, 2, 1, 1);

        btn_plus = new QPushButton(expr);
        btn_plus->setObjectName(QStringLiteral("btn_plus"));
        sizePolicy.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_plus, 0, 3, 1, 1);

        btn_4 = new QPushButton(expr);
        btn_4->setObjectName(QStringLiteral("btn_4"));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_4, 1, 0, 1, 1);

        btn_5 = new QPushButton(expr);
        btn_5->setObjectName(QStringLiteral("btn_5"));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_5, 1, 1, 1, 1);

        btn_6 = new QPushButton(expr);
        btn_6->setObjectName(QStringLiteral("btn_6"));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_6, 1, 2, 1, 1);

        btn_sub = new QPushButton(expr);
        btn_sub->setObjectName(QStringLiteral("btn_sub"));
        sizePolicy.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_sub, 1, 3, 1, 1);

        btn_1 = new QPushButton(expr);
        btn_1->setObjectName(QStringLiteral("btn_1"));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_1, 2, 0, 1, 1);

        btn_2 = new QPushButton(expr);
        btn_2->setObjectName(QStringLiteral("btn_2"));
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_2, 2, 1, 1, 1);

        btn_3 = new QPushButton(expr);
        btn_3->setObjectName(QStringLiteral("btn_3"));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_3, 2, 2, 1, 1);

        btn_multi = new QPushButton(expr);
        btn_multi->setObjectName(QStringLiteral("btn_multi"));
        sizePolicy.setHeightForWidth(btn_multi->sizePolicy().hasHeightForWidth());
        btn_multi->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_multi, 2, 3, 1, 1);

        btn_clr = new QPushButton(expr);
        btn_clr->setObjectName(QStringLiteral("btn_clr"));
        sizePolicy.setHeightForWidth(btn_clr->sizePolicy().hasHeightForWidth());
        btn_clr->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_clr, 3, 0, 1, 1);

        btn_0 = new QPushButton(expr);
        btn_0->setObjectName(QStringLiteral("btn_0"));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_0, 3, 1, 1, 1);

        btn_equal = new QPushButton(expr);
        btn_equal->setObjectName(QStringLiteral("btn_equal"));
        sizePolicy.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_equal, 3, 2, 1, 1);

        btn_div = new QPushButton(expr);
        btn_div->setObjectName(QStringLiteral("btn_div"));
        sizePolicy.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btn_div, 3, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);

        retranslateUi(expr);

        QMetaObject::connectSlotsByName(expr);
    } // setupUi

    void retranslateUi(QDialog *expr)
    {
        expr->setWindowTitle(QApplication::translate("expr", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        label_display->setText(QApplication::translate("expr", "0", Q_NULLPTR));
        btn_7->setText(QApplication::translate("expr", "7", Q_NULLPTR));
        btn_8->setText(QApplication::translate("expr", "8", Q_NULLPTR));
        btn_9->setText(QApplication::translate("expr", "9", Q_NULLPTR));
        btn_plus->setText(QApplication::translate("expr", "+", Q_NULLPTR));
        btn_4->setText(QApplication::translate("expr", "4", Q_NULLPTR));
        btn_5->setText(QApplication::translate("expr", "5", Q_NULLPTR));
        btn_6->setText(QApplication::translate("expr", "6", Q_NULLPTR));
        btn_sub->setText(QApplication::translate("expr", "-", Q_NULLPTR));
        btn_1->setText(QApplication::translate("expr", "1", Q_NULLPTR));
        btn_2->setText(QApplication::translate("expr", "2", Q_NULLPTR));
        btn_3->setText(QApplication::translate("expr", "3", Q_NULLPTR));
        btn_multi->setText(QApplication::translate("expr", "*", Q_NULLPTR));
        btn_clr->setText(QApplication::translate("expr", "c", Q_NULLPTR));
        btn_0->setText(QApplication::translate("expr", "0", Q_NULLPTR));
        btn_equal->setText(QApplication::translate("expr", "=", Q_NULLPTR));
        btn_div->setText(QApplication::translate("expr", "/", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class expr: public Ui_expr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPR_H
