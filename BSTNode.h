//
// Created by Pc on 4/28/2020.
//

#ifndef BST_BSTNODE_H
#define BST_BSTNODE_H
#include <bits/stdc++.h>
using namespace std;
template <class T>
class BSTNode {
private:
    BSTNode<T>* left;
    BSTNode<T>* right;
    T key;
public:
    BSTNode(){
        left=right=0;
        key=0;
    }
    BSTNode(T k, BSTNode* l = 0, BSTNode* r = 0){
        key=k;
        left=l;
        right=r;
    }
    BSTNode(BSTNode* node){
        key=node->getKey();
        left=node->getLeft();
        right=node->getRight();
    }
    void setLeft(BSTNode<T>* l){
        left=l;
    }
    void setRight(BSTNode<T>* r){
        right=r;
    }
    void setKey(T k){
        key=k;
    }
    BSTNode<T>* getLeft(){
        return left;
    }
    BSTNode<T>* getRight(){
        return right;
    }
    T getKey(){
        return key;
    }
    void operator =(BSTNode<T>* node){
        key=node->getKey();
        left=node->getLeft();
        right=node->getRight();
    }

};


#endif //BST_BSTNODE_H
