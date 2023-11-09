/*
 * veiculo.cpp
 *
 *  Created on: 22 de set. de 2023
 *      Author: ALUNO
 */

#include "veiculo.h"
#include <iostream>
using namespace std;



void Veiculo::mover(){
	cout << "Veiculo: " << nome << "Se moveu" << endl;
}


int Terrestre::getCapPass(){
	return cap_pass;
};

void Terrestre::setCapPass(int capPass) {
	cap_pass = capPass;
}

void Terrestre::mover(){
	cout << "Veiculo Terrestre: " << nome << "Andou" << endl;
}

float Aquatico::getCargaMax(){
		return carga_max;
	}

	void Aquatico::setCargaMax(float cargaMax) {
		carga_max = cargaMax;
	}
	void Aquatico::mover(){
		cout << "Veiculo Aquatico: " << nome << "Navegou" << endl;
	}

	float Aereo::getVelMax()  {
			return vel_max;
		}

		void Aereo::setVelMax(float velMax) {
			vel_max = velMax;
		}
		void Aereo::mover(){
			cout << "Veiculo Aereo: " << nome << "Voou" << endl;
		}

