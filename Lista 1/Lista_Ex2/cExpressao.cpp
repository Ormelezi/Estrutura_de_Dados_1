

#include "cExpressao.h"
#include <cmath>
#include <iostream>

using namespace std;

cExpressao::cExpressao() {}
cExpressao::cExpressao(const cExpressao& orig) {}
cExpressao::~cExpressao() {}

void cExpressao::insert(){

    cout << "Informe o valor de A:";
    cin >> this->a;
    cout << "Informe o valor de B:";
    cin >> this->b;
    cout << "Informe o valor de C:";
    cin >> this->c;
    
}

int cExpressao::calculo(){
    int r=0,s=0,d=0;
    
    r = pow((this->a+this->b),2);
    s = pow((this->b+this->c),2);
    d = (r+s)/2;
    
    return d;
}



