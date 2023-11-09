#ifndef FILA_H_
#define FILA_H_

#include <iostream>
using namespace std;

template <class T> class Fila {
private:
  T *itens;
  int tamanho;
  int capacidade;
  int pInicial;
  int pFinal;
  // atributos
public:
  Fila(int cap) {

    tamanho = 0;
    capacidade = cap;

    pInicial = 0;
    pFinal = 0;
    itens = new T[capacidade];
    // inicializar array de items, capacidade, tamanho, posição inicial
  }
  ~Fila() {
    delete[] itens;
    // destruir array de itens
  }
  void enfileira(const T &item) {
    if (cheia()) {
      throw "Fila cheia";
    } else {
      itens[pFinal] = item;
      pFinal = (pFinal + 1) %
               capacidade; // Atualiza o índice de fim usando operador %.
      tamanho++;
    }
  }
  T desenfileira() {
    if (vazia()) {
      throw "Fila vazia";
    } else {
      T item = itens[pInicial];
      pInicial = (pInicial + 1) % capacidade; //
      tamanho--;
      return item;
    }
  }
  int cheia() {
    return (tamanho == capacidade);
    // retorna 1 se cheia, 0 caso contrário
  }
  int vazia() {
    return (tamanho == 0);
    // retorna 1 se vazia, 0 caso contrário
  }
  int tamanhoFila() {
    return tamanho;
    // retorna a quantidade de itens atualmente na fila
  }
};

#endif /* FILA_H_ */
