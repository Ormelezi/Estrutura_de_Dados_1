#include "cCusto.h"
#include <iostream>

using namespace std;

cCusto::cCusto() {}
cCusto::cCusto(const cCusto& orig) {}
cCusto::~cCusto() {}

void cCusto::front(){
    
    cout << "Informe o valor de custo de fabrica: R$ ";
    cin >> this->cFabric;
    
}

float cCusto::imposto(){
    
    float cConsumidor;
    
    this->Destribuidor = this->cFabric + (this->cFabric *this->porcentagemDistribuidor /100 );
    this->ValorImpostos = this->cFabric + (this->cFabric * this->PercentualImpostos / 100);
    cConsumidor = this->cFabric + this->Destribuidor + this->ValorImpostos;
            
    return cConsumidor;
    
}