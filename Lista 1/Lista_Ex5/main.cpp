#include <iostream>
#include <cstdlib>

#include "cNota.h"

using namespace std;


int main(int argc, char** argv) {
    
    cNota obj;
    obj.front();
    cout << "Sua nota média é: " << obj.media();
    
    return 0;
}

