#include "cAlunos.h"
#include <iostream>

using namespace std;

cAlunos::cAlunos() {
}

cAlunos::cAlunos(const cAlunos& orig) {
}

cAlunos::~cAlunos() {
}

void cAlunos::lerDados() {
    int qnt;

    cout << "Digite a quantidade de alunos para ser cadastrados: ";
    cin >> qnt;
    aluno vetor[qnt];

    for (int i = 0; i < qnt; i++) {
        cout << "Digite o nome do " << i + 1 << "º aluno: ";
        cin >> vetor[i].nome;
        cout << "Digite a matricula do " << i + 1 << "º aluno: ";
        cin >> vetor[i].matricula;
        cout << "Digite a primeira nota do " << i + 1 << "º aluno: ";
        cin >> vetor[i].n1;
        cout << "Digite a segunda nota do " << i + 1 << "º aluno: ";
        cin >> vetor[i].n2;
        cout << endl << endl;
    }

    this->imprimirVetor(vetor, qnt);

}


void cAlunos::imprimirVetor(aluno vetor[], int qnt) {

    for (int i = 0; i < qnt; i++) {

        cout << "Nome: " << vetor[i].nome;

        cout << "\nMatricula: " << vetor[i].matricula;

        cout << "\nNota 1: " << vetor[i].n1;

        cout << "\nNota 2: " << vetor[i].n2;

        cout << "\nMedia do aluno: " << (vetor[i].n1+vetor[i].n2)/2 << endl << endl;

    }

}

