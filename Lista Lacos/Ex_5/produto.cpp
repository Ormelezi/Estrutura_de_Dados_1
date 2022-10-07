#include <iostream>
#include "produto.h"

using namespace std;

produto::produto() {
}

produto::produto(const produto& orig) {
}

produto::~produto() {
}

void produto::lerDados() {
    int codigo = 9999;
    int quant = 0;
    float acumular = 0.0;
    bool aux = true;


    cout << "1- Cachorro quente |   1,70" << endl;
    cout << "2- Bauro Simples   |   2,30" << endl;
    cout << "3- Bauro com ovo   |   2,60" << endl;
    cout << "4- Hamburguer      |   2,40" << endl;
    cout << "5- Cheseburguer    |   2,50" << endl;
    cout << "6- Refrigerante    |   1,00" << endl;
    cout << "0= SAIR." << endl;

    while (codigo != 0) {

        cout << "\nInforme o codigo do produto: ";
        cin >> codigo;
        if (codigo != 0) {
            cout << "Informe a quantidade que deseja: ";
            cin >> quant;
            cout << endl;
            acumular += this->quantProduto(codigo, quant);
        } else {
        }
    }


    cout << "O preço total é de: R$" << acumular << endl;

}

float produto::quantProduto(int codigo, int quant) {
    float quantTotal = 0;

    switch (codigo) {
        case 1:
            quantTotal = (quant * 1.70);


            break;
        case 2:
            quantTotal = (quant * 2.30);

            break;
        case 3:
            quantTotal = (quant * 2.60);

            break;
        case 4:
            quantTotal = (quant * 2.40);

            break;
        case 5:
            quantTotal = (quant * 2.50);

            break;
        case 6:
            quantTotal = (quant * 1.00);

            break;
        default:
            quantTotal = 0;

    }
    return quantTotal;


}
