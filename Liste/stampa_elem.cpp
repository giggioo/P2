#include <iostream>
using namespace std;

struct elem{
    int val;
    elem* next;
};

typedef elem* lista;

int head(lista l){return l->val;}
lista tail(lista l){return l->next;}

void stampalista(lista l){
    while(l!=NULL){
        cout<<head(l)<<endl;
        l=tail(l);
    }
}

lista insert_elem(lista l, elem* e){
    e->next = l;
    return e;
}

lista crealista(int n){
    lista l = new elem;
    for(int i=0;i<n;i++){
        elem *e = new elem;
        cout<<"Elemento "<<n<<". Valore: ";
        cin>>e->val;
        l = insert_elem(l,e);
    }
    return l;
}

lista delete_elem(lista l, elem* e){
    while(l!=e){
                
    }
    
}

int main(int argc, char const *argv[]){
    

    lista testa = new elem;
    elem* elemento2 = new elem;

    testa->val = 5;
    elemento2->val = 7;
    testa->next=elemento2;
    elemento2->next=NULL;

    stampalista(testa);

    return 0;
}
