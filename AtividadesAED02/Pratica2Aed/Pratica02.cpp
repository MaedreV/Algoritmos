/*
 * pratica02.cpp
 *
 *  Created on: 21 de set. de 2023
 *      Author: raulv
 */

#include <iostream>
#include "veiculo.h"

using namespace std;




int main() {


/*Veiculo * terr = new Terrestre("Vt1");
	((Terrestre*)terr)->setCapPass(45); */


	/*Veiculo * aqua = new Aquatico("Vq1");
	((Aquatico*)aqua)->setCargaMax(12.5); */

	Veiculo * aereo = new Aereo("Aviao1");
	((Aereo*)aereo)->setVelMax(1040.5);
	cout << "Vel max: " << ((Aereo*)aereo)->getVelMax() << endl;


	aereo->mover();

	Veiculo * terr = new Terrestre("Carro1");
		dynamic_cast <Terrestre*>(terr)->setCapPass(45);
		cout << "capacidade max: " << dynamic_cast <Terrestre*>(terr)->getCapPass() << endl;

		dynamic_cast <Terrestre*>(terr)->mover();


		Veiculo * aqua = new Aquatico("Navio1");
				dynamic_cast <Aquatico*>(aqua)->setCargaMax(20.5);
				cout << "carga max: " << dynamic_cast <Aquatico*>(aqua)->getCargaMax() << endl;

				dynamic_cast <Aquatico*>(aqua)->mover();


	    Veiculo* anfi = new Anfibio("Vanfi");
	    anfi->mover();


  // terr->mover();
	//aqua->mover();


delete terr;
	delete aqua;
	delete aereo;
delete anfi;
}
