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
#include "FirmaDistributie.h"

int main()
{
    ifstream fin("date.in");
    cinematograf imax("imax");
    cinematograf cinemaCity("Cinema City");
    FirmaDistributie <persoane*>marvel;
    FirmaDistributie <unsigned>MARVEL;

    film Endgame,Detective_Pikachu,Sonic;
    Endgame.citire(fin);
    Detective_Pikachu.citire(fin);
    Sonic.citire(fin);


    imax.adauga_film(&Endgame);
    imax.adauga_film(&Detective_Pikachu);
    cinemaCity.adauga_film(&Detective_Pikachu);
    cinemaCity.adauga_film(&Sonic);

    imax.distribuie_incasari();
    cinemaCity.distribuie_incasari();

    Endgame.distribuie_incasari();
    Detective_Pikachu.distribuie_incasari();
    Sonic.distribuie_incasari();

    imax.afisare();
    cinemaCity.afisare();


    marvel.adauga(Detective_Pikachu);
    MARVEL.adauga_film(Detective_Pikachu);

    return 0;
}
