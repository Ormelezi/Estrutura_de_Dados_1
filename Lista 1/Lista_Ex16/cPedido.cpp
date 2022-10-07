#include "cPedido.h"
#include <iostream>

using namespace std;

cPedido::cPedido() {}
cPedido::cPedido(const cPedido& orig) {}
cPedido::~cPedido() {}


void cPedido::front(){
    int codigo;
    float acumular;
    bool aux = true;
    
    while(aux){
    cout << "Cachorro quente    100 | 1,20" <<endl;
    cout << "Bauru simples      101 | 1,30" <<endl;
    cout << "Hambúrger          102 | 1,20" <<endl;
    cout << "Cheeseburguer      103 | 1,30" <<endl;
    cout << "Refrigerante       104 | 1,00" <<endl;
    
    cout << "Digite um código para add um item: " <<endl;
    cin >>codigo;
    if (codigo == 0)
        aux = false;
    acumular+= this->addItemPedido(codigo);
    
    }
    cout << "Valor da conta :" <<acumular;
}

float cPedido::addItemPedido(int codigo){
    float valor;
    switch(codigo){
    
        case 100:
            valor = 1.2;
        break;
        case 101:
            valor = 1.3;
        break;
        case 102:
            valor = 1.2;
        break;
        case 103:
            valor = 1.3;
        break;
        case 104:
            valor = 1.2;
        break;
       
    }
    return valor;
    
}
