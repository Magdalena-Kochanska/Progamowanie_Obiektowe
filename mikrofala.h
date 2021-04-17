#ifndef MIKROFALA_H
#define MIKROFALA_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>
#include "potrawa.h"

class Mikrofala
{
public:
    int temp_mikro;
    int czas_dzialania;
    bool czy_dziala;
    //Potrawa jaka_potrawa; // do ogarniêcia

    void Stop();
    Potrawa Wybierz_potrawe(std::vector<Potrawa> aMenu, int aIndeks);
    void Ustaw_czas(int aCzas);
    void Ustaw_temp(int aTemp);
    void Gotowanie();
    void Jeszcze_raz();
    void Sprawdz_mikrofala();
};

#endif //MIKROFALA_H
