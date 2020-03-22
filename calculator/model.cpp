#include "model.h"

model::model()
{
    this->num1 = 0;
    this->num2 = 0;
}

void model::set_num1(int num)
{
    this->num1 = num;
}

void model::set_num2(int num)
{
    this->num2 = num;
}

void model::set_flag(QString flag)
{
    this->flag = flag;
}

QString model::doExpr()
{
    int result = 0;
    if(flag == "+"){
        result = this->num1 +this->num2;
    }
    else if(flag == "-"){
        result = this->num1 - this->num2;
    }
    else if(flag == "*"){
        result = this->num1 * this->num2;
    }
    else if(flag == "/"){
        result = this->num1 / this->num2;
        if(this->num2 == 0){
            return "ERROR";
        }
    }
    else{
        return QString::number(this->num1);
    }
    return QString::number(result);
}
