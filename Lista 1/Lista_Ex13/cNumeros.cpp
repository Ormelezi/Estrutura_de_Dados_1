#include "cNumeros.h"
#include <iostream>

using namespace std;

cNumeros::cNumeros() {}
cNumeros::cNumeros(const cNumeros& orig) {}
cNumeros::~cNumeros() {}

void cNumeros::front(){
    
    int x, y, z; 
    
    cout << "Digite o primeiro numero: ";
    cin >> x;
    cout << "Digite o segundo numero: ";
    cin >> y;
    cout << "Digite o terceiro numero: ";
    cin >> z;   
    
    if (x > y && x > z) {
        cout << "O maior valor é: " << x;
    } else if (y > x && y > z) {
        cout << "O maior valor é: " << y; 
    } else {
        cout << "O maior valor é: " << z;
    }
 
}
    
