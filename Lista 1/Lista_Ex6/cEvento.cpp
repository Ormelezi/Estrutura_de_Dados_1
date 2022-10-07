#include "cEvento.h"
#include <iostream>

using namespace std;

cEvento::cEvento() {}
cEvento::cEvento(const cEvento& orig) {}
cEvento::~cEvento() {}

void cEvento::front(){
    
    cout << "Digite a duração de determinado evento em segundos: ";
    cin >> this->duracaoEvent;
    
}

float cEvento::tempo(){
    int s;
    
    s=this->duracaoEvent;
   
    return s;        
}