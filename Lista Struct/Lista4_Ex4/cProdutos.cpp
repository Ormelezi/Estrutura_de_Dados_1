#include "cProdutos.h"
#include <iostream>

using namespace std;

cProdutos::cProdutos() {}
cProdutos::cProdutos(const cProdutos& orig) {}
cProdutos::~cProdutos() {}

void cProdutos::lerDados() {
    int qnt;
    int cod;

    cout << "Digite quantos produtos você deseja cadastrar: ";
    cin >> qnt;
    produtos vetor[qnt];

    for (int i = 0; i < qnt; i++) {

        cout << "Digite o código do " << i + 1 << "º produto: ";
        cin >> vetor[i].cod;
        cout << "Digite o preço do " << i + 1 << "º produto: R$";
        cin >> vetor[i].preço;
        cout << endl << endl;

    }
    cod = 0;

    cout << "Digite o código do produto para efetuar a pesquisa: ";
    cin >> cod;
    cout << "O preço do produto " << cod << " é R$" << this->consulta(vetor, cod, qnt);
}

float cProdutos::consulta(produtos vetor[], int cod, int qnt) {
    int preco;

    for (int i = 0; i < qnt; i++) {

        if (vetor[i].cod == cod) {

            preco = vetor[i].preço;

        }

    }
    return preco;
}