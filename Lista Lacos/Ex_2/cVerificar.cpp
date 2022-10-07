#include "cVerificar.h"
#include <iostream>
#include <cmath>

using namespace std;

cVerificar::cVerificar() {
}

cVerificar::cVerificar(const cVerificar& orig) {
}

cVerificar::~cVerificar() {
}

void cVerificar::lerDados() {
    int num = 0, resultado = 0;

    cout << "Digite um numero: ";
    cin >> num;

    if (this->resultado(num) == 0) {

        cout << num << " é um numero primo";
    } else {
        cout << num << " não é um numero primo";
    }

}

int cVerificar::resultado(int num) {
    int x;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            x++;
        }
    }

    return x;
}

