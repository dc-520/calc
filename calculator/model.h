#ifndef MODEL_H
#define MODEL_H
#include <QString>


class model
{
public:
    model();
    void set_num1(int num);
    void set_num2(int num);
    void set_flag(QString flag);
    QString doExpr();

private:
    int num1;
    int num2;
    QString flag;
};

#endif // MODEL_H
