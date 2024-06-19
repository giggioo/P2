#include <iostream>
#include <cstring>

#include "tipo.h"

using namespace std;

int compare(tipo_inf t1, tipo_inf t2){
    return strcmp(t1,t2);
}

void copy(tipo_inf& d, tipo_inf s){
    d = new char[strlen(s)];
    strcpy(d,s);
}

void print(tipo_inf t){
    cout<<t;
}
