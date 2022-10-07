#include "cClientes.h"
#include <iostream>

using namespace std;

cClientes::cClientes() {
}

cClientes::cClientes(const cClientes& orig) {
}

cClientes::~cClientes() {
}

void cClientes::cadastro() {

    for (int i = 0; i < 3; i++) {

        cout << "Digite o nome do " << i + 1 << " cliente: ";
        cin >> vetor[i].nome;
        cout << "Digite o cpf do " << i + 1 << " cliente: ";
        cin >> vetor[i].cpf;
        cout << "Digite o valor do Deposito inicial: R$";
        cin >> vetor[i].saldo;
        cout << endl;
    }

    cout << "\n"
            "-------------- Cadastramento efetuado com sucesso!! ------------------"
            "\n"
            "\n";

    cout << "Digite '1' para Saque."
            "\nDigite '2' para Deposito."
            "\nDigite '3' para Sair." << endl;
    cin >> this->opc;



}

void cClientes::conta() {
    int cpf, valor;

    switch (this->opc) {

        case 1:
            cout << "Digite o seu CPF: ";
            cin >> cpf;

            for (int i = 0; i < 3; i++) {

                if (vetor[i].cpf == cpf) {

                    cout << "Digite o valor: ";
                    cin >> valor;

                    if (vetor[i].saldo < valor) {
                        cout << "Você não possui essa quantia. ";

                    } else {
                        vetor[i].saldo = vetor[i].saldo - valor;
                        cout << "\n\n---------------------------------------------------------------\n\n"
                                "Senhor(a) o seu salto atual é de : R$" << vetor[i].saldo;
                    }

                }
            }
            break;

        case 2:
            cout << "Digite o seu CPF: ";
            cin >> cpf;

            for (int i = 0; i < 3; i++) {

                if (vetor[i].cpf == cpf) {

                    cout << "Digite o valor: ";
                    cin >> valor;

                    vetor[i].saldo = vetor[i].saldo + valor;

                    cout << "\n\n---------------------------------------------------------------\n\n"
                            "Senhor(a) " << vetor[i].nome << " o seu salto atual é de : R$" << vetor[i].saldo;

                }
            }
            break;
        case 3:
            break;
    }
}

