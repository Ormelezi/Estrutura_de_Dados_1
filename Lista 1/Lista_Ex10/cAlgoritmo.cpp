#include "cAlgoritmo.h"
#include <iostream>

using namespace std;

cAlgoritmo::cAlgoritmo() {}
cAlgoritmo::cAlgoritmo(const cAlgoritmo& orig) {}
cAlgoritmo::~cAlgoritmo() {}

void cAlgoritmo::front(){
    
    float a,b,c;
    
    cout << "Digite 3 valores a,b,c: \n";
    cin >> a >> b >> c; 
    cout << "O valor de a = " << a << "\nO valor de b = " << b << "\nO valor de c = " << c <<endl;
    
    if (a > b)
        if (a > c)
        cout << "'a' é o maior número.";
        else
            cout << "'c' é o maior número.";
    else
        if (b > c)           
            cout << "'b' é o maior número.";
        else
            cout << "'c' é o maior número.";
                  
}