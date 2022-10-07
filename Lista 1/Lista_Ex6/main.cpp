#include <iostream>
#include <cstdlib>

#include "cEvento.h"

using namespace std;


int main(int argc, char** argv) {

    cEvento obj;
    obj.front();
    cout<< "A duração do evento é de: " << obj.tempo() << " segundos,  " <<obj.tempo()/60 << " minutos e " <<obj.tempo()/3600 <<" horas.";
    
    
    return 0;
}

