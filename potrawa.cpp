#include "potrawa.h"

//Potrawa



///Konstruktor Potrawa -  nadaje domyślne wartości przy utworzeniu obiektu
Potrawa::Potrawa()
{
    indeks=0;
    nazwa=" ";
    ilosc=0;
    czas_przyg=0;
    temp_przyg=0;
}


///Funkcje zaczynajace sie od get - Funkcje pozwalające pozyskać wartości prywatne z klasy

std::string Potrawa::getNazwa() const
{
    return nazwa;
}

int Potrawa::getId() const
{
    return indeks;
}

int Potrawa::getCzas() const
{
    return czas_przyg;
}

int Potrawa::getTemp() const
{
    return temp_przyg;
}

//Funkcja manualnie ustawiająca parametry potrawy

void Potrawa::UstawPotrawe(int aIndeks, std::string aNazwa, int aCzas, int aTemp, int aIlosc)
{
        this->indeks = aIndeks;
        this->nazwa = aNazwa;
        this->czas_przyg = aCzas;
        this->temp_przyg = aTemp;
        this->ilosc = aIlosc;
}

//Funkcja pokazująca parametry potrawy

void Potrawa::Sprawdz_potrawe() const ///funkcja sprawdz potrawe wyswietla potrawe aby porownac informacje z wybrana przez nas potrawe
{
        std::cout<<indeks<<" - "<<nazwa<<std::endl;
        std::cout<<"==========================="<<std::endl;
        std::cout<<"Numer w menu: "<<indeks<<std::endl;
        std::cout<<"Nazwa potrawy: " <<nazwa<<std::endl;
        std::cout<<"Ilosc: "<<ilosc<<std::endl;
        std::cout<<"Czas przygotowania: "<<czas_przyg<<std::endl;
        std::cout<<"Temperatura przygotowania: "<<temp_przyg<<std::endl;
        std::cout<<std::endl;
        std::cout<<"==========================="<<std::endl;

}

void GotowaPotrawa::Sprawdz_potrawe() const ///Sprawdz_potrawe - funkcja dziedziczona do gotowa potrawa
{
        std::cout<<indeks<<" - "<<nazwa<<std::endl;
        std::cout<<"==========================="<<std::endl;
        std::cout<<"Numer w menu: "<<indeks<<std::endl;
        std::cout<<"Nazwa potrawy: " <<nazwa<<std::endl;
        std::cout<<"Ilosc: "<<ilosc<<std::endl;
        std::cout<<"Potrawa gotowa. Smacznego!"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"==========================="<<std::endl;

}

void SpalonaPotrawa::Sprawdz_potrawe() const ///Sprawdz_potrawe - funkcja dziedziczona do spalona potrawa
{
        std::cout<<indeks<<" - "<<nazwa<<std::endl;
        std::cout<<"==========================="<<std::endl;
        std::cout<<"Numer w menu: "<<indeks<<std::endl;
        std::cout<<"Nazwa potrawy: " <<nazwa<<std::endl;
        std::cout<<"Ilosc: "<<ilosc<<std::endl;
        std::cout<<"Potrawa spalona. O nie!"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"==========================="<<std::endl;

}
