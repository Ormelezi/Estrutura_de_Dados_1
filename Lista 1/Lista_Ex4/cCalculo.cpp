#include "cCalculo.h"
#include <iostream>

using namespace std;


cCalculo::cCalculo() {}
cCalculo::cCalculo(const cCalculo& orig) {}
cCalculo::~cCalculo() {}

void cCalculo::insert(){
    
  cout<<"Escreva (sua idade somente em dias): ";
  cin>> this->d;
    
  
}

int cCalculo::mes(){
    
    int m;
    
    m=(this->d%365)/ 30;
    
    return m;   
}

int cCalculo::anos(){
    
    int a;
    
    a=(this->d/365);
    
    return a;
}