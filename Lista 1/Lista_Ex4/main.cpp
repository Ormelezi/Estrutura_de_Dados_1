#include <iostream>
#include <cstdlib>

#include "cCalculo.h"

using namespace std;


int main(int argc, char** argv) {
    
    cCalculo obj;
    obj.insert();
    cout << "Sua idade é de " << obj.anos() << " anos e " << obj.mes() <<" meses.";
    

    return 0;
}

