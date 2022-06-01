#include <bits/stdc++.h>
#include "BSTFCI.cpp"
#include "BSTNode.h"
using namespace std;
template <class T>
bool isSubTree(BSTFCI<T> t1,BSTFCI<T> t2){
    BSTNode<T>*it1=t1.root,*it2=t2.root;
    bool found=false;
    while(it1!=0){
        if(it2->getKey()>it1->getKey())
            it1=it1->getRight();
        else if(it2->getKey()<it1->getKey())
            it1=it1->getLeft();
        else if(it1->getKey()==it2->getKey()){
            found=true;
            break;
        }
    }
    if(found){
        return checkSubTreeOf2Nodes(it1,it2);
    }
    return false;

}
template <class T>
bool checkSubTreeOf2Nodes(BSTNode<T>* node1,BSTNode<T>* node2){
    if(node2==0){
        return true;
    }
    return(node1->getKey()==node2->getKey()
           && checkSubTreeOf2Nodes(node1->getLeft(),node2->getLeft())
           && checkSubTreeOf2Nodes(node1->getRight(),node2->getRight()));
}
int main() {
    BSTFCI<int> BST1,BST2;
    BST1.insert(5);
    BST1.insert(3);
    BST1.insert(7);
    BST1.insert(2);
    BST1.insert(4);
    BST1.insert(9);
    BST1.insert(1);
    BST1.insert(8);
    BST1.insert(10);
    BST2.insert(9);
    BST2.insert(8);
    BST2.insert(10);
    BSTNode<int>* it1=BST1.root;
    BSTNode<int>* it2=BST2.root;

    BST1.display(it1);
    cout<<"************************************************** \n";
    BST1.display(it2);
    cout<<isSubTree(BST1,BST2);




    return 0;
}
