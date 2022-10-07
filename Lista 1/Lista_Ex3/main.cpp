/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: angel
 *
 * Created on 19 de Agosto de 2022, 17:36
 */

#include <cstdlib>
#include <iostream>

#include "cCalculo.h"

using namespace std;


int main(int argc, char** argv) {

    cCalculo obj;
    obj.insert();
    cout << "Sua idade em dias é de :" <<obj.calculo();
    
    return 0;
}

