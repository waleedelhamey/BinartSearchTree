//
// Created by Pc on 4/28/2020.
//

#ifndef BST_BSTFCI_H
#define BST_BSTFCI_H
#include "BSTNode.h"
template <class T>
class BSTFCI {
public:
    BSTNode<T>* root;
    BSTFCI() ;
    void clear();
    bool isEmpty();
    T search(T element);
    void insert(T element);
    void display(BSTNode<T>*it);
    void Delete(T element);

};


#endif //BST_BSTFCI_H
