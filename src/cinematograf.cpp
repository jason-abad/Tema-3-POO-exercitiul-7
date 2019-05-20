#include "cinematograf.h"

cinematograf :: cinematograf(string aux){
    nume=aux;
}

void cinematograf :: adauga_film(film *x){
    int aux;
    cout<<"Incasarile realizate de filmul "<<x->nume<<" in cinematograful "<<nume<<"=";
    cin>>aux;
    incasari.push_back(aux);
    F.push_back(x);
}


void cinematograf :: distribuie_incasari(){
    for(int i=0;i<F.size();i++)
        F[i]->incasariTotale+=incasari[i];
}

void cinematograf :: afisare(){
    for(int i=0;i<F.size();i++)
        F[i]->afisare();
}
