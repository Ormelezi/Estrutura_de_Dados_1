#include "cNotas.h"
#include <iostream>

using namespace std;

cNotas::cNotas() {
}

cNotas::cNotas(const cNotas& orig) {
}

cNotas::~cNotas() {
}

void cNotas::front() {
    char opc;

    cout << "Digite a primeira nota: ";
    cin >> this->n1;
    cout << "Digite a segunda nota: ";
    cin >> this->n2;
    cout << "Digite a terceira nota: ";
    cin >> this->n3;
    cout << "Agora digite 'A' para média aritmética e 'P' para média ponderada: ";
    cin >> opc;
    cout << "A média do aluno é: " << medias(opc, n1, n2, n3);

}

float cNotas::medias(char opc, float n1, float n2, float n3) {


    if (toupper(opc) == 'P') {
        return (n1 * 0.5 + n2 * 0.3 + n3 * 0.2);
    } else {
        return (n1 + n2 + n3) / 3;
    }

}