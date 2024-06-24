#ifndef DEBUG
    #define DEBUG
#endif

#include <iostream>
using namespace std;

#include "includes/tipo.h"
#include "includes/tree.h"


int main(int argc, char const *argv[]){
    
    tree t=NULL;
    t=new_node("Luca");
    node* n=new_node("Paolo");
    insert_child(t,n);
    n = new_node("Marco");
    insert_sibling(t->firstChild,n);
    n = new_node("Lucia");
    insert_child(t->firstChild->nextSibling,n);
    node *m = new_node("Anna");
    insert_sibling(n->parent,m);

    cout<<get_info(t)<<" "<<t->firstChild->inf<<" "<<t->firstChild->nextSibling->inf<<t->firstChild->nextSibling->nextSibling->inf<<endl;
    return 0;
}
