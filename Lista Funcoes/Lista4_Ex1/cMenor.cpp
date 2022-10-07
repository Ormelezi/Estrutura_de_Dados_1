#include "cMenor.h"
#include <iostream>

using namespace std;

cMenor::cMenor() {
}

cMenor::cMenor(const cMenor& orig) {
}

cMenor::~cMenor() {
}

void cMenor::lerDados() {
    int n1 = 0, n2 = 0;

    cout << "Digite o primeiro valor: ";
    cin >> n1;
    cout << "Digite o segundo valor: ";
    cin >> n2;

    cout << "O menor número é: " << verificar(n1,n2);


}

int cMenor::verificar(int n1, int n2) {

    if (n1 < n2) {
        return n1;
    } else {
        return n2;
    }

}

