#ifndef POTRAWA_H
#define POTRAWA_H
#include "mikrofala.h"
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


#endif //POTRAWA_H
