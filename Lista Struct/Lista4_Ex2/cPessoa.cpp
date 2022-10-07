#include "cPessoa.h"
#include <iostream>
#include <cmath>

using namespace std;

cPessoa::cPessoa() {
}

cPessoa::cPessoa(const cPessoa& orig) {
}

cPessoa::~cPessoa() {
}

void cPessoa::lerDados() {

    int qtde = 0;
    int cpf;
    cout << "Digite a quantidade de pessoas: ";
    cin >> qtde;
    pessoa vetor[qtde];

    for (int i = 0; i < qtde; i++) {
        cout << "Digite o nome: ";
        cin >> vetor[i].nome;
        cout << "Digite o cpf: ";
        cin >> vetor[i].cpf;
        cout << "Digite o sexo: ";
        cin >> vetor[i].sexo;
        cout << "Digite a altura: ";
        cin >> vetor[i].altura;
        cout << "Digite o peso: ";
        cin >> vetor[i].peso;
    }

    cpf = 0;

    cout << "Digite o CPF a ser pesquisado: " << endl;
    cin >> cpf;

    this->imprimirVetor(vetor, qtde);
    cout << endl;
    this->bolha(vetor, qtde);
    cout << endl;
    this->imprimirVetor(vetor, qtde);
    cout << endl;
}

float cPessoa::calcIMC(pessoa x) {
    float imc = 0.0;
    imc = x.peso / pow(x.altura, 2);
    return imc;
}

void cPessoa::pesquisaSequencial(pessoa vetor[], int qtde, int cpf) {

    bool achou = false;

    for (int i = 0; i <= qtde; i++) {
        if (cpf == vetor[i].cpf) {
            cout << this->calcIMC(vetor[i]);
            achou = true;
        }
        if (!achou)
            cout << "Pessoa não encontrada.";
    }
}

//ORDENAÇÃo

void cPessoa::bolha(pessoa vetor[], int qtde) {
    int i, j;
    pessoa temp;
    for (i = qtde - 1; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            if (vetor[j].cpf > vetor[j + 1].cpf) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

//PESQUISA

int cPessoa::PesquisaBinaria(pessoa vetor[], int qtde, int cpf) {
    int inf, sup, meio;
    inf = 0;
    sup = qtde - 1;
    while (inf <= sup) {
        meio = (inf + sup) / 2;
        if (cpf == vetor[meio].cpf)
            return meio;
        else if (cpf < vetor[meio].cpf)
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    return -1; /* não encontrado */
}

void cPessoa::imprimirVetor(pessoa vetor[], int qtde) {

    for (int i = 0; i < qtde; i++) {

        cout << vetor[i].nome << ", ";

        cout << vetor[i].cpf << ", ";

        cout << vetor[i].sexo << ", ";

        cout << vetor[i].altura << ", ";

        cout << vetor[i].peso << ", ";

    }

}
