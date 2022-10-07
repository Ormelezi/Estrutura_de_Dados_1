#include "cValores.h"
#include <iostream>

using namespace std;

cValores::cValores() {
}

cValores::cValores(const cValores& orig) {
}

cValores::~cValores() {
}

void cValores::front() {
    int n1;

    cout << "Digite um número: ";
    cin >> n1;
    cout << "A função irá retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.";
    cout << "\n\n>>>>> " << verificar(n1) << " <<<<<<";

}

int cValores::verificar(int n1) {

    if (n1 < 0) {
        return -1;
    } else if (n1 > 0) {
        return 1;
    } else {
        return 0;
    }

}