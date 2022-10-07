#include <cstdlib>
#include<iostream>
#include "cExpressao.h"

using namespace std;

int main(int argc, char** argv) {
    
    cExpressao obj;
    obj.insert();
    cout << "o Resultado é: " << obj.calculo();

    return 0;
}

