#ifndef PILHA_H
#define PILHA_H
#include "stack.h"

template <typename E> class pilha: public Stack<E> {
private:
    int maior;
    int top;
    E *vetor;
public:
    pilha(int size = 2);
    ~pilha();
    void clear();
    void push(const E& it);
    E pop();
    const E& topValue();
    int length() const;
};

#endif // PILHA_H
