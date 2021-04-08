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
    enum Stan{surowa, przygotowana, spalona};

public:
    int ilosc;
    void UstawPotrawe(int aIndeks, std::string aNazwa, int aCzas, int aTemp, int aIlosc);
    std::string getNazwa();
    int getId();
    int getCzas();
    int getTemp();
    void Wyrzuc_potrawe(); // Usuwa jedną potrawę z listy
    void Sprawdz_potrawa(); //Pokazuje listę potraw
    void Zjedz(); // To samo co Wyrzuc_potrawe?
};

class Mikrofala
{
public:
    int temp_mikro;
    int czas_dzialania;
    bool czy_dziala;
    Potrawa jaka_potrawa; // do ogarniêcia

    void Stop();
    void Wybierz_potrawe();
    void Ustaw_czas(int aCzas);
    void Ustaw_temp(int aTemp);
    void Gotowanie();
    void Jeszcze_raz();
    void Sprawdz_mikrofala();
};

#endif //MYHEADER_H
