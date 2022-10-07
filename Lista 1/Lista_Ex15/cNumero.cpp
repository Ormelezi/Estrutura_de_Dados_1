#include "cNumero.h"
#include <iostream>

using namespace std;

cNumero::cNumero() {}
cNumero::cNumero(const cNumero& orig) {}
cNumero::~cNumero() {}

void cNumero::front(){
    
int numeroint;

cout << "Digite um numero inteiro quaisquer: ";
cin >> numeroint;

if (numeroint > 0){
cout << "NUMERO POSITIVO\n";
}

else if (numeroint < 0){
cout << "NUMERO NEGATIVO\n";
}

if ( numeroint % 2 == 0){
cout << "NUMERO PAR\n";
}

else if ( numeroint % 2 != 0){
cout << "NUMERO IMPAR\n";
}
    
}