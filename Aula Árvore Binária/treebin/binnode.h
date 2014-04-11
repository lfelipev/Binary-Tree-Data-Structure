#ifndef BINNODE_H
#define BINNODE_H


template <typename E>class BinNode {
public:
    BinNode(const E& e, BinNode *left = 0, BinNode * right = 0):
        element(e), left(left), right(right) {
    }
    E element;
    BinNode *left;
    BinNode * right;
};

#endif // BINNODE_H
