/*pilha.h **Created on : 6 de out.de 2023 * Author : raulv */

#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>
using namespace std;

template <class T> class Pilha {
private:
  T *pilha;
  int capacidade;
  int topoP;
  // Atributos para array de items, capacidade e topo da pilha
public:
  Pilha(int capacidade) {
    this->capacidade = capacidade;
    this->pilha = new T[capacidade];
    this->topoP = -1; // -1
    // instancia array de items, inicializa capacidade e topo
  }
  ~Pilha() {
    delete[] pilha;
    // destroy array de items
  }
  void empilha(T item) {
    if (topoP < capacidade - 1) { //-1
      // topoP++;
      pilha[++topoP] = item;

    } else {
      throw "Estouro de pilha"; // estilização
    }
  }
  T desempilha() {
    if (topoP >= 0) {
      T item = pilha[topoP--];
      // topoP--;
      return item;
    } else {
      throw "Pilha Vazia";
    }
  }
  int tamanho() {
    return topoP + 1;
    // retorna o número de elementos na pilha.
  }
};

#endif /* PILHA_H_ */
