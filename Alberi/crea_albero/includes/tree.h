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
tipo_inf get_info(node *n);
node* get_parent(node *n);
node *getFirstChild(node *n);
node *getNextSibling(node *n);


