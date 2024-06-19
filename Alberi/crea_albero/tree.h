#include "tipo.h" 

struct node{
    tipo_inf inf;
    node *parent;
    node *firstChild;
    node *nextSibling;
};

typedef node* tree;

node* new_node(tipo_inf i);
void insert_child(tree t, tree child);
void insert_sibling(node *n, tree sibling);




