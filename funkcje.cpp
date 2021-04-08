#include "header.h"

//Potrawa

void Potrawa::UstawPotrawe(int aIndeks, std::string aNazwa, int aCzas, int aTemp, int aIlosc)
{
        this->indeks = aIndeks;
        this->nazwa = aNazwa;
        this->czas_przyg = aCzas;
        this->temp_przyg = aTemp;
        this->ilosc = aIlosc;
}

std::string Potrawa::getNazwa()
{
    return nazwa;
}

int Potrawa::getId()
{
    return indeks;
}

int Potrawa::getCzas()
{
    return czas_przyg;
}

int Potrawa::getTemp()
{
    return temp_przyg;
}

//Mikrofala

void Mikrofala::Ustaw_temp(int aTemp)
{
    temp_mikro = aTemp;
};

void Mikrofala::Ustaw_czas(int aCzas)
{
    czas_dzialania = aCzas;
}
