#include "cNotas.h"
#include <iostream>

using namespace std;

cNotas::cNotas() {}
cNotas::cNotas(const cNotas& orig) {}
cNotas::~cNotas() {}

void cNotas::front(){
    int nota;
    
    cout << "Digite a maior nota do aluno: "; 
    cin >> this->n1; 
    cout << "Digite a segunda nota do aluno: ";
    cin >> this->n2;
    cout << "Digite a ultima do aluno: ";
    cin >> this->n3;
    
    cout << "A media é " <<this->media(nota);
    
    if (this->media(nota)>=6)
        cout << ", Aluno Aprovado!!";
    else
        cout << ", Aluno Reprovado!!";
        
}

float cNotas::media(int nota){
    
    float media;
    
     media=(this->n1*4+this->n2*3+this->n3*3)/(4+3+3);
    
    return media;
}