#include "liste.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

void agenda(lista& agenda, tipo_inf a){
    
    if(search(agenda, a)==NULL){
        elem* e = new_elem(a);
        agenda = insert_elem(agenda,e);
        cout<<"Elemento inserito correttamente"<<endl;
    }
    else{
        cout<<"Il movimento è già presente nella lista."<<endl;
        return;
    }

}

void stampa(lista l){
    while(l!=NULL){
        print(head(l));
        l=tail(l);
    }
}

void quanti(lista agenda, tipo_inf a){
    int precedenti = 0;
    int successivi = 0;
    
    while(agenda!=NULL){
        if(strcmp(head(agenda)->data, a->data)==0){
            if(strcmp(head(agenda)->oraInizio, a->oraInizio)<0)
                precedenti++;
            else successivi++;    
            agenda = tail(agenda);
        }
        else{
            agenda = tail(agenda);
        }
    }
    cout<<"Appuntamenti prima: "<<precedenti<<endl;
    cout<<"Appuntamenti dopo: "<<successivi<<endl;
}

int main(int argc, char* argv[]){
    

    if(argc<1){
        cout<<"Usage: "<<argv[0]<<" file.txt"<<endl;
        exit(0);
    }

    ifstream is;
    lista agend=NULL;

    is.open(argv[1]);
    while(!is.eof()){
        appuntamento* a = new appuntamento;
        is.getline(a->data,10,' ');
        is.getline(a->oraInizio,10,' ');
        is.getline(a->oraFine,10,'\n');
        is.getline(a->descrizione,49,'\n');
        agenda(agend,a);
        
        //stampa(agend);
    }
    
    char data[7];
    char oraInizio[5];
    char oraFine[5];
    char descrizione[51];

    
    appuntamento* a = new appuntamento;
    cin.getline(a->data,7,'\n');
    cin.getline(a->oraInizio,5,'\n');
    cin.getline(a->oraFine,5,'\n');
    cin.getline(a->descrizione,51,'\n');

    quanti(agend,a);

    return 0;
}