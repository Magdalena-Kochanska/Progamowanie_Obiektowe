#ifndef POTRAWA_H
#define POTRAWA_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>


class Potrawa
{
protected:
    int indeks;
    std::string nazwa;
    int czas_przyg;
    int temp_przyg;
    //void SkopiujDane(Potrawa aPotrawaZrodlowa);
    //Stan_potrawy stan; //Do usuniecia jesli probujemy dziedziczenie

public:
    int ilosc;
    void UstawPotrawe(int aIndeks, std::string aNazwa, int aCzas, int aTemp, int aIlosc);
    std::string getNazwa() const;
    int getId() const;
    int getCzas() const;
    int getTemp() const;
    //void Wyrzuc_potrawe(); // Usuwa jedną potrawę z listy
    virtual void Sprawdz_potrawe() const; //Pokazuje potrawe
    //void Zjedz(); // To samo co Wyrzuc_potrawe?
    explicit Potrawa(); // Do wypełnienia domyślnymi wartościami

    friend void Wyrzuc_Potrawe(std::vector <Potrawa> &aMenu, int aIndeks);
};

class GotowaPotrawa : public Potrawa
{
    public:
    void Sprawdz_potrawe() const;
};

class SpalonaPotrawa : public Potrawa
{
    public:
    void Sprawdz_potrawe() const;
};

#endif //POTRAWA_H
