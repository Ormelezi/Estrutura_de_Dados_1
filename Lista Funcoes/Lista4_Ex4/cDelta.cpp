#include "cDelta.h"
#include <iostream>
#include "cmath"

using namespace std;

cDelta::cDelta() {
}

cDelta::cDelta(const cDelta& orig) {
}

cDelta::~cDelta() {
}

void cDelta::front() {
    float a,b,c;
    
    
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;
    cout << "O valor de Delta é: "<< formula(a,b,c);

}

float cDelta::formula(int a, int b, int c) {
    float delta;
    
    delta = pow(b,2)-4*a*c;
    
    return delta;
}