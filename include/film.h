#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <stdlib.h>
using namespace std;

#include "persoane.h"
#include "regizor.h"
#include "actor.h"

class film{
    int nrActori=0;
    int nrPersonal=0;
    regizor regiz;
    vector <actor> actori;
    vector <persoane> personal_tehnic;
    string nume;
    string tip;
    int durata;
    float incasariTotale=0;
    float venit_ramas=0;
public:
    void citire(ifstream &fin);
    void distribuie_incasari();
    void afisare();
    friend class cinematograf;
    template <class T>
    friend class FirmaDistributie;
};

#endif // FILM_H
