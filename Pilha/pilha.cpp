#include "pilha.h"
#include<iostream>

using namespace std;

template<typename E>
pilha<E>::pilha(int size) {
    maior = size;
    top = 0;
    vetor = new E[size];
}

template<typename E>
pilha<E>::~pilha() {
    delete [] vetor;
}

template<typename E>
void pilha<E>::clear() {
    top = 0;
}

template<typename E>
void pilha<E>::push(const E& it) {
    if (top == maior) {
        return cout << "A fila está vazia!" << endl;
    }
    vetor[top++] = it;
}

template<typename E>
E pilha<E>::pop() {
    if (top == 0) {
        return cout << "A fila está vazia!" << endl;
    }
    return vetor[--top];
}

template<typename E>
const E& pilha<E>::topValue() {
    if (top == 0) {
        return cout << "A fila está vazia!" << endl;
    }
    return vetor[top-1];
}

template<typename E>
int pilha<E>::length() const {
    return top;
}

