#include <iostream>

using namespace std;

#include "includes/tipo.h"
#include "includes/tree.h"

node* new_node(tipo_inf const i){
    node *n = new node;
    copy(n->inf,i);
    n->firstChild=n->nextSibling=n->parent=NULL;
    return n;
}

void insert_child(tree t, tree child){
    child->nextSibling=t->firstChild;
    child->parent=t;
    t->firstChild=child;
}

void insert_sibling(node *n, tree sibling){
    sibling->parent=n->parent;
    sibling->nextSibling=n->nextSibling;
    n->nextSibling=sibling;
}

tipo_inf get_info(node *n){
    return n->inf;
}

node* get_parent(node *n){
    return n->parent;
}

node *getFirstChild(node *n){
    return n->firstChild;
}

node *getNextSibling(node *n){
    return n->nextSibling;
}