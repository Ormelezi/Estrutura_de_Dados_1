
#include "cCalculo.h"
#include <iostream>

using namespace std;

cCalculo::cCalculo() {}
cCalculo::cCalculo(const cCalculo& orig) {}
cCalculo::~cCalculo() {}

void cCalculo::insert(){
    
  cout<<"Escreva sua idade (somente em anos): ";
  cin>> this->a;
  cout<<"Escreva sua idade (somente em meses): ";
  cin >> this->m;
  cout<<"Escreva (sua idade somente em dias): ";
  cin>> this->d;
  
}

int cCalculo::calculo(){
    int D;
    
     D=(this->d+(this->a*365)+(this->m*30));
    
   return D;  
}