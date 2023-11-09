/*
 * veiculo.h
 *
 *  Created on: 14 de set. de 2023
 *      Author: raulv
 */

#ifndef VEICULO_H_
#define VEICULO_H_
#include <iostream>
using namespace std;

class Roda{
public:
	Roda(){
		cout << "Roda criada" << endl;
	}
	~Roda(){
			cout << "Roda destruida" << endl;
		}

};


class Veiculo{
private:
	string nome;
	int num_rodas = 0;
	Roda* rodas;
public:
	Veiculo(const char* veiculo){
		this -> nome = string(veiculo);
		rodas = new Roda[num_rodas];
		this->rodas = nullptr;
		cout << "Veiculo: " << nome << " criado" << endl;
	}

	~Veiculo(){
		delete[] rodas;
		cout << "Veiculo: " << nome << " destruido" << endl;
	}

	void setNumRodas(int num);
	    int getNumRodas();

};


#endif /* VEICULO_H_ */
