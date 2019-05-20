#include "regizor.h"


void regizor :: citire(ifstream &fin){
        fin>>sumaFixa;
        persoane :: citire(fin);
    }
void regizor :: afisare(){
        cout<<"Regizor\nSuma fixa="<<sumaFixa<<endl;
        persoane :: afisare();
    }

