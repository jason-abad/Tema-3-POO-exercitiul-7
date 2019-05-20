#ifndef ACTOR_H
#define ACTOR_H

#include <persoane.h>


class actor : public persoane{
    bool principal;
public:
    void citire(ifstream &fin);
    void afisare();
    friend class film;
    template <class T>
    friend class FirmaDistributie;
};


#endif // ACTOR_H
