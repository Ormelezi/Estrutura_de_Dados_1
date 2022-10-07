#include "cAlgoritmo.h"
#include <iostream>

using namespace std;

cAlgoritmo::cAlgoritmo() {}
cAlgoritmo::cAlgoritmo(const cAlgoritmo& orig) {}
cAlgoritmo::~cAlgoritmo() {}


void cAlgoritmo::front(){
    
    int a,b;
    
  cout << "Informe o primeiro numero 'A': ";
  cin >> a;
  cout << "Informe o segundo numero 'B': ";
  cin >> b;
  
  if (a % b == 0)
      cout << "O número A e multiplo de B.";
  else
      cout << "O número A nao e multiplo de B.";
    
} 
