#ifndef REGIZOR_H
#define REGIZOR_H

#include <persoane.h>


class regizor : public persoane{
    float sumaFixa;
public:
    void citire(ifstream &fin);
    void afisare();
    friend class film;
};


#endif // REGIZOR_H
