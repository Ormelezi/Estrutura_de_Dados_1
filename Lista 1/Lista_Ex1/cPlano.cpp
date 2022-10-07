#include "cPlano.h"
#include <iostream>
#include <cmath>

using namespace std;

cPlano::cPlano() {}
cPlano::cPlano(const cPlano& orig) {}
cPlano::~cPlano() {}

void cPlano::insert(){
    cout << "Informe o valor do x no primeiro ponto:";
    cin >> this->x1;
    cout << "Informe o valor do y no primeiro ponto:";
    cin >> this->y1;
    cout << "Informe o valor do x no segundo ponto:";
    cin >> this->x2;
    cout << "Informe o valor do y no segundo ponto:";
    cin >> this->y2;
    
}
float cPlano::calcDist(){
    float d=0.0;
    d = sqrt(pow((this->x2-this->x1),2)+pow((this->y2-this->y1),2));
    return d;
}

