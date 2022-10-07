#include <iostream>
#include <cstdlib>
#include "cPlano.h"

using namespace std;

int main(int argc, char** argv) {
    cPlano obj;
    obj.insert();
    cout << "A distância é de " << obj.calcDist();
    
    return 0;
}

