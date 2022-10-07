#include "cPeso.h"
#include <iostream>

using namespace std;

cPeso::cPeso() {}
cPeso::cPeso(const cPeso& orig) {}
cPeso::~cPeso() {}

void cPeso::front(){
   
  float altura,idealhomem,idealmulher;
  char sexo;
    
  cout << "Escreva a altura: ";
  cin >> altura;
  cout << "Escreva 'm' para masculino e 'f' para feminino: ";
  cin >> sexo;
    
    if (sexo == 'm'){
        idealhomem = (72.7*altura-58);
        cout << "O peso ideal é " << idealhomem;
    }
    else if  (sexo == 'f'){
        idealmulher = (62.1*altura-44.7);
        cout << "O peso ideal é " << idealmulher;
    }
    
    else 
        cout << "Entrada invalida";
    
}
  