/*
 * veiculo.h
 *
 *  Created on: 21 de set. de 2023
 *      Author: raulv
 */


#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>
using namespace std;

class Veiculo{
protected:
	string nome;
public:
	Veiculo(const char* var){
		this->nome = string(var);
    	//cout << "Veiculo" << nome << "Construido" << endl;

	}
	 virtual ~Veiculo(){
	    	//cout << "Veiculo" << nome << "Destruido" << endl;
	    }
	virtual void mover() = 0;

};



class Terrestre : public virtual Veiculo {
private: int cap_pass = 5;
public:

Terrestre(const char* var) : Veiculo(var) {
        cout << "Veiculo terrestre: " << nome << " criado" << endl;
    }

    virtual ~Terrestre(){
       	cout << "Veiculo Terrestre: " << nome << "Destruido" << endl;
       }
    void setCapPass(int cap_pass = 5);
    int getCapPass();
    void mover();
protected:
    Terrestre() : Veiculo("Terrestre Protegido"){}


};



class Aquatico : public virtual Veiculo {
private: float carga_max = 10;
public:
    Aquatico(const char* var) : Veiculo(var) {
        cout << "Veiculo aquatico: " << nome << " criado" << endl;
    }
    virtual ~Aquatico(){
       	cout << "Veiculo Aquatico: " << nome << "Destruido" << endl;
       }
	float getCargaMax();
	void setCargaMax(float carga_max = 10);
	void mover();

protected:

    Aquatico() : Veiculo("Aquatico Protegido"), carga_max(50) {}


};

class Aereo : public Veiculo {
private: float vel_max = 100;
public:
    Aereo(const char* var) : Veiculo(var) {
        cout << "Veiculo aereo: " << nome << " criado" << endl;
    }
    virtual ~Aereo(){
    	cout << "Veiculo Aereo: " << nome << "Destruido" << endl;
    }

	float getVelMax();
	void setVelMax(float vel_max = 100);
	void mover();

};

class Anfibio : public Terrestre, public Aquatico {
public:


    Anfibio (const char * nome) : Veiculo(nome), Terrestre(), Aquatico() {}

   /* virtual ~Anfibio(){
        	cout << "Veiculo Anfibio: " << nome << "Destruido" << endl;
        } */

    void mover() {
        Terrestre::mover();
        Aquatico::mover();
    }
};



#endif /* VEICULO_H_ */
