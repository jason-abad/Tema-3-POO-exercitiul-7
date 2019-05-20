#ifndef PERSOANE_H
#define PERSOANE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <stdlib.h>
using namespace std;


class persoane{
protected:
    long long int cnp;
    string nume;
    string nume_film;
    float procent;
    float incasari=0;
public:
    virtual void citire(ifstream &fin);
    virtual void afisare();
    friend class film;
};

#endif // PERSOANE_H
