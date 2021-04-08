#ifndef MYHEADER_H
#define MYHEADER_H
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>


class Potrawa
{
private:
    int indeks;
    std::string nazwa;
    int czas_przyg;
    int temp_przyg;
    //enum Stan{surowa, przygotowana, spalona};

public:
    int ilosc;
    void UstawPotrawe(int aIndeks, std::string aNazwa, int aCzas, int aTemp, int aIlosc);

};

class Mikrofala
{
public:
    int temp_mikro;
    int czas_dzialania;
    bool czy_dziala;
    Potrawa jaka_potrawa; // do ogarniêcia

    void Stop();
    void Gotowanie();

};

class Uzytkownik
{
public:
    std::string imie;

    void Wlacz();
    void Wybierz_potrawe();
    void Ustaw_czas(int aCzas, Mikrofala aMikrofala)
    {
        aMikrofala.czas_dzialania = aCzas;
    };
    void Ustaw_temp(int aTemp, Mikrofala aMikrofala)
    {
        aMikrofala.temp_mikro = aTemp;
    };
    void Wyrzuc_potrawe();
    void Jeszcze_raz();
    void Zjedz();
    void Sprawdz_mikrofala();
    void Sprawdz_potrawa();

};

#endif //MYHEADER_H
