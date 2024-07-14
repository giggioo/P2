
struct appuntamento{

    char data[7];
    char oraInizio[5];
    char oraFine[5];
    char descrizione[51];

};

typedef appuntamento* tipo_inf;

int compare(tipo_inf, tipo_inf);
void copy(tipo_inf&, tipo_inf);
void print(tipo_inf);
