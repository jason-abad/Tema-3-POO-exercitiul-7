#ifndef CINEMATOGRAF_H
#define CINEMATOGRAF_H

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

class cinematograf{
    string nume;
    vector <film*> F;
    vector <int> incasari;
public:
    cinematograf (string aux);
    void adauga_film(film *x);
    void distribuie_incasari();
    void afisare();
};

#endif // CINEMATOGRAF_H
