#include <iostream>
#include "cNota.h"

cNota::cNota() {}
cNota::cNota(const cNota& orig) {}
cNota::~cNota() {}

using namespace std;

void cNota::front(){
    
    cout << "Informe a nota 1:";
    cin >>this->n1;
       
    cout << "Informe a nota 2:";
    cin >>this->n2;

    cout << "Informe a nota 3:";
    cin >>this->n3;
 
}

float cNota::media(){
    
    float media;
    
    media=(this->n1*2+this->n2*3+this->n3*5)/(2+3+5);
    
    return media;
}
    
    
