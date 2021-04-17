#include "mikrofala.h"

//Mikrofala

void Mikrofala::Ustaw_temp(int aTemp)
{
    temp_mikro = aTemp;
};

void Mikrofala::Ustaw_czas(int aCzas)
{
    czas_dzialania = aCzas;
}

Potrawa Mikrofala::Wybierz_potrawe(std::vector<Potrawa> aMenu, int aIndeks)
{
    return(aMenu[aIndeks]);
}
