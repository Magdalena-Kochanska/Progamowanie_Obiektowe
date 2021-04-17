#ifndef POTRAWA_H
#define POTRAWA_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>

enum Stan_potrawy{surowa,przygotowana,spalona};

class Potrawa
{
private:
    int indeks;
    std::string nazwa;
    int czas_przyg;
    int temp_przyg;
    Stan_potrawy stan; //enum: surowa, przygotowana, spalona

public:
    int ilosc;
    void UstawPotrawe(int aIndeks, std::string aNazwa, int aCzas, int aTemp, int aIlosc);
    std::string getNazwa();
    int getId();
    int getCzas();
    int getTemp();
    //void Wyrzuc_potrawe(); // Usuwa jedną potrawę z listy
    void Sprawdz_potrawe(); //Pokazuje potrawe
    //void Zjedz(); // To samo co Wyrzuc_potrawe?
    Potrawa(); // Do wypełnienia domyślnymi wartościami
};


#endif //POTRAWA_H
