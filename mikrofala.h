#ifndef MIKROFALA_H
#define MIKROFALA_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>

#include "main.h"
#include "potrawa.h"

class Mikrofala
{
public:
    //int temp_mikro;
    //int czas_dzialania;
    //bool czy_dziala;
    //Potrawa jaka_potrawa; // do ogarniêcia
    //void Stop();
    //Potrawa Wybierz_potrawe(std::vector<Potrawa> aMenu, int aIndeks);
    void Ustaw(Potrawa aObiekt, std::vector <SpalonaPotrawa> &aMenuSpalonych, std::vector <GotowaPotrawa> &aMenuPrzygotowanych);
    // Obiekt innej klasy jako argument do innej klasy

    //int Mikrofala::Ustaw_temp(int aTemp , int aCzas, int( * Ustawienia )( int, int ));
    //void Ustaw_temp(int aTemp);
    //void Gotowanie();
    //void Jeszcze_raz();
    //void Sprawdz_mikrofala();
};

#endif //MIKROFALA_H
