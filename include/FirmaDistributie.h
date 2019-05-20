#ifndef FIRMADISTRIBUTIE_H
#define FIRMADISTRIBUTIE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <stdlib.h>
using namespace std;

#include "persoane.h"
#include "regizor.h"
#include "actor.h"
#include "film.h"
#include "cinematograf.h"

template <class T>
class FirmaDistributie{
    vector <film> produs;
    int nrTotalPers=0;
    int nrActori=0;
    vector <T> PERSOANE;
public:
    void adauga(film x);
};
template <>
class FirmaDistributie<unsigned>{
    unsigned nrPersonajePrincipale=0;
public:
    void adauga_film(film x);
};

template<class T>
void FirmaDistributie<T> :: adauga(film x){
    produs.push_back(x);
    PERSOANE.push_back(&x.regiz);

    for(int i=0;i<x.nrActori;i++)
        PERSOANE.push_back(&x.actori[i]);

    for(int i=0;i<x.nrPersonal;i++)
        PERSOANE.push_back(&x.personal_tehnic[i]);

    nrTotalPers=nrTotalPers + x.nrActori + x.nrPersonal + 1;
    nrActori=nrActori + x.nrActori;
    for(int i=0;i<PERSOANE.size();i++)
        PERSOANE[i]->afisare();
    cout<<"Numar total de persoane="<<nrTotalPers<<"\n";
    cout<<"Numar de actori="<<nrActori<<"\n";
    x.afisare();

}
void FirmaDistributie<unsigned> :: adauga_film(film x){
    for(int i=0;i<x.nrActori;i++)
        if(x.actori[i].principal)
            nrPersonajePrincipale++;
    cout<<"Numarul de personaje principale="<<nrPersonajePrincipale<<"\n";

};
#endif // FIRMADISTRIBUTIE_H
