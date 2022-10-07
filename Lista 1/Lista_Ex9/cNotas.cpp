#include "cNotas.h"
#include <iostream>

using namespace std;

cNotas::cNotas() {}
cNotas::cNotas(const cNotas& orig) {}
cNotas::~cNotas() {}

void cNotas::front(){
    int nota;
    
    cout << "Digite a nota 1 do aluno: "; 
    cin >> this->n1; 
    cout << "Digite a nota 2 do aluno: ";
    cin >> this->n2;
    cout << "Digite a nota 3 do aluno: ";
    cin >> this->n3;
    
    cout << "A media é " <<this->media(nota);
    
    if (this->media(nota)>=6)
        cout << ", Aluno Aprovado!!";
    else
        cout << ", Aluno Reprovado!!";
        
}

float cNotas::media(int nota){
    
    float media;
    
    media = (this->n1+this->n2+this->n3)/3;
    
    return media;
}