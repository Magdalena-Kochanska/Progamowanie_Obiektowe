#include "potrawa.h"

//Potrawa

using namespace std;

//Funkcja nadaje domyœlne wartoœci przy utworzeniu obiektu
Potrawa::Potrawa()
{
    indeks=0;
    nazwa=" ";
    ilosc=0;
    czas_przyg=0;
    temp_przyg=0;
    stan=surowa;
}

//Funkcje pozwalaj¹ce pozyskaæ wartoœci prywatne z klasy

string Potrawa::getNazwa()
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

//Funkcja manualnie ustawiaj¹ca parametry potrawy

void Potrawa::UstawPotrawe(int aIndeks, string aNazwa, int aCzas, int aTemp, int aIlosc)
{
        this->indeks = aIndeks;
        this->nazwa = aNazwa;
        this->czas_przyg = aCzas;
        this->temp_przyg = aTemp;
        this->ilosc = aIlosc;
}

//Funkcja pokazuj¹ca parametry potrawy

void Potrawa::Sprawdz_potrawe()
{
        cout<<indeks<<" - "<<nazwa<<endl;
        cout<<"==========================="<<endl;
        cout<<"Numer w menu: "<<indeks<<endl;
        cout<<"Nazwa potrawy: " <<nazwa<<endl;
        cout<<"Ilosc: "<<ilosc<<endl;
        cout<<"Czas przygotowania: "<<czas_przyg<<endl;
        cout<<"Temperatura przygotowania: "<<temp_przyg<<endl;
        cout<<"Stan: ";
        if(stan==spalona){cout<<"Spalona";}
        else if(stan==przygotowana){cout<<"Przygotowana";}
        else{cout<<"Surowa";}
        cout<<endl;
        cout<<"==========================="<<endl;

}


