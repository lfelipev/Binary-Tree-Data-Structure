#include "binnode.h"
#include <iostream>
#include<QString>

using namespace std;

template<typename T>
/* Função recursiva para imprimir a árvore*/
void printTree(BinNode<T> *node, int level = 0) {
    if(node != 0) {
        printTree(node->right, level + 1);
        cout << qPrintable(QString("\t").repeated(level))<< node->element << endl;
        printTree(node->left, level + 1);
    }

}

/* Função recursiva que retorna o tamanho da árvore*/
template<typename T>
int heightTree(BinNode<T> *node) {
    if(node != 0) {
        return 1 + qMax(heightTree(node->right), heightTree(node->left));
    }
    else {
        return 0;
    }

}

/* Função recursiva que retorna a quantidade de folhas da árvore*/
template<typename T>
int leafsTree(BinNode<T> *node) {
    if(node != 0) {
        if(node->left == 0 && node->right == 0) {
            return 1;
        }
        else {
            return leafsTree(node->left) + leafsTree(node->right);
        }
    }
    else {
        return 0;
    }
}

int main() {
    /*        7
     *    3
     *        6
     * 1
     *        5
     *    2
     *        4
    */

    BinNode<int> *root = new BinNode<int>(1,
                                          new BinNode<int>(2,
                                                           new BinNode<int>(4),
                                                           new BinNode<int>(5)),
                                          new BinNode<int>(3,
                                                           new BinNode<int>(6),
                                                           new BinNode<int>(7)));
    printTree(root);
    cout << "Tamanho: "<< heightTree(root) << endl;
    cout << "Folhas: "<< leafsTree(root) << endl;
    return 0;
}
