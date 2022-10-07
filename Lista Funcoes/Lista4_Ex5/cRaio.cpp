#include "cRaio.h"
#include <iostream>
#include "cmath"

#define pi 3.14

using namespace std;

cRaio::cRaio() {
}

cRaio::cRaio(const cRaio& orig) {
}

cRaio::~cRaio() {
}

void cRaio::front (){
    int r;
    
    cout << "informe o raio da esfera: ";
    cin >> r;
    cout << "O volume da esfera é " << volume(r);
    
}

float cRaio::volume(int r){
    float v;
    
    v = (pi*pow(r,3))*4/3;
    
    return v;
}