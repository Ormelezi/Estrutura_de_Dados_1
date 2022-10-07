#include <cstdlib>
#include <iostream>

#include "cCusto.h"

using namespace std;


int main(int argc, char** argv) {

   cCusto obj;
   obj.front();
   cout << "O custo ao consumidor é de : R$ " << obj.imposto(); 
    
    
    return 0;
}

