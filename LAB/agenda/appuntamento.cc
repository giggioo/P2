#include "appuntamento.h"
#include <cstring>
#include <iostream>

using namespace std;

int compare(tipo_inf a1, tipo_inf a2){

    if(strcmp(a1->data,a2->data)==0 && strcmp(a1->oraInizio,a2->oraInizio)==0)
        return 0;
    else
        return -1;

    
}

void copy(tipo_inf& to, tipo_inf from){

    to = new appuntamento;
    strcpy(to->data , from->data);
    strcpy(to->descrizione , from->descrizione);
    strcpy(to->oraFine , from->oraFine);
    strcpy(to->oraInizio , from->oraInizio);

}

void print(tipo_inf a){
    cout<<"DATA: "<<a->data<<endl;
    cout<<"ORA INIZIO: "<<a->oraInizio<<endl;
    cout<<"ORA FINE: "<<a->oraFine<<endl;
    cout<<"DESCRIZIONE: "<<a->descrizione<<endl;
    
    
}