#include <iostream>
#include "tipo.h"
#include "liste.h"

using namespace std;

int compare(tipo_inf a, tipo_inf b){
    if(a->seme != b->seme)
        return -1;
    if(a->valore < b->valore)
        return -1;
    return 1;
}

void copy(tipo_inf& to, tipo_inf from){
    to->seme = from->seme;
    to->valore = from->valore;
}

void print(tipo_inf a){
    cout<<a->seme<<a->valore;
}

