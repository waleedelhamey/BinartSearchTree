//
// Created by Pc on 4/28/2020.
//

#include "BSTFCI.h"
#include <bits/stdc++.h>
using namespace std;
#include "BSTNode.h"
template <class T>
BSTFCI<T>::BSTFCI(){
    root = 0;
}
template <class T>
void BSTFCI<T>:: clear()   {
    root = 0;
}
template <class T>
bool BSTFCI<T>:: isEmpty() {
    return root == 0;
}
template <class T>
T BSTFCI<T>:: search(T element){
    if(isEmpty()){
        cerr<<"The BST is already empty \n";
        return 0;
    }
    BSTNode<T>*it =root;
    while(it!=0){
        if(it->getKey()==element){
            return it->getKey();
        }
        else if(element<it->getKey()){
            it = it->getLeft();
        }
        else{
            it = it->getRight();
        }
    }
    delete it;
    return 0;
}
template <class T>
void BSTFCI<T>:: insert(T element){
    if(isEmpty()){
        root=new BSTNode<T>(element);
        return;
    }
    BSTNode<T>*it =root,*prv=0;
    while(it!=0){
        prv=it;
        if(element<it->getKey()){
            it = it->getLeft();
        }
        else{
            it = it->getRight();
        }
    }
    BSTNode<T>*newNode= new BSTNode<T>(element);
    if(element<prv->getKey()){
        prv->setLeft(newNode);

    }
    else{
        prv->setRight(newNode);
    }
}
template <class T>
void BSTFCI<T>:: display(BSTNode<T>*it){
   if (it == 0)
       return;
   display(it->getLeft());
   cout << it->getKey() << " ";
   display(it->getRight());
}
