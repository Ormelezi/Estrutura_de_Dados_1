#include "cCategoria.h"
#include <iostream>

using namespace std;

cCategoria::cCategoria() {}
cCategoria::cCategoria(const cCategoria& orig) {}
cCategoria::~cCategoria() {}

void cCategoria::front(){
    
    int idade;
    
    cout << "Digite a idade do nadador: ";
    cin >> idade;
    cout << "A categoria do nadador é: ";  
    
        if(idade>=5 && idade<=7)
    {
        cout << "Infantil A" ;
    }
        else if(idade>=8 && idade<=11)
    {
        cout << "Infantil B";
    }
        else if(idade>=12 && idade<=14)
    {
        cout << "Juvenil A";
    }
        else if(idade>=15 && idade<=17)
    {
        cout << "Juvenil B";
    }
        else if(idade>=18)
    {
        cout << "Adulto";
    }
    
}