#include "cFibonacci.h"
#include <iostream>

using namespace std;

cFibonacci::cFibonacci() {
}

cFibonacci::cFibonacci(const cFibonacci& orig) {
}

cFibonacci::~cFibonacci() {
}

void cFibonacci::lerDados() {
    int i, atual = 1, anterior = 0, novo;

    cout << "Fibonacci: " << atual;
    
    
    for (i = 1; i < 20; i++) {
        novo = atual + anterior;
                anterior = atual;
                atual = novo;
                cout << ", "<< novo;
    }
    cout << ".";
}
