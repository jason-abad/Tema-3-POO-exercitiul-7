#include "actor.h"

void actor :: citire(ifstream &fin){
        fin>>principal;
        persoane :: citire(fin);
    }

void actor :: afisare(){
        if(principal==0)
            cout<<"Personaj secundar"<<endl;
        else
            cout<<"Personaj principal"<<endl;
        persoane :: afisare();
    }
