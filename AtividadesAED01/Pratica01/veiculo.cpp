/*
 * veiculo.cpp
 *
 *  Created on: 14 de set. de 2023
 *      Author: raulv
 */

#include <iostream>
using namespace std;
#include "veiculo.h"


void Veiculo::setNumRodas(int num) {
    num_rodas = num;
    delete[] rodas;
    rodas = new Roda[num_rodas];


}

int Veiculo::getNumRodas() {
    return num_rodas;
}


