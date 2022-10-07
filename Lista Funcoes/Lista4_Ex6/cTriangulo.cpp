#include "cTriangulo.h"
#include <iostream>

using namespace std;

cTriangulo::cTriangulo() {
}

cTriangulo::cTriangulo(const cTriangulo& orig) {
}

cTriangulo::~cTriangulo() {
}

void cTriangulo::front() {
    int x, y, z;

    cout << "Informe o lado 'x' do triângulo: ";
    cin >> x;
    cout << "Informe o lado 'y' do triângulo: ";
    cin >> y;
    cout << "Informe o lado 'z' do triângulo: ";
    cin >> z;
    cout << "\nEste é um: " << tipo(x, y, z);

}

string cTriangulo::tipo(int x, int y, int z) {
    string tipo;

    if (x < (y + z) && y < (x + z) && z < (y + x)) {

        if (x == y && y == z) {
            tipo = "Triângulo Equilátero";

        } else if (x != y && y != z && z != x) {
            tipo = "Triângulo Escaleno";

        } else {
            tipo = "Triângulo Isósceles";

        }
    } else {
        tipo = "Triângulo inválido";
    }
    return tipo;
}


