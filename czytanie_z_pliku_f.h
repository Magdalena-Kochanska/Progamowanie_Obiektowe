#ifndef CZYTANIE_H
#define CZYTANIE_H
#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>
#include "potrawa.h"

class Potrawa;

using namespace std;

void Czytanie_z_pliku(vector <Potrawa> &menu)
{

    fstream plik( "tekst.txt", std::ios::in ); //zakładamy, że plik istnieje
    string linia;
    string srednik = ";";
    if (plik.good() == true)
    {
        do
        {
            int zlicznik = 0;
            zlicznik ++;


            getline(plik, linia);
            size_t pozycja = 0; //zmienna do rozmiaru linijki
            int numer =0;
            string wycinek;

            int numer_id;
            string nazwa_z_pliku;
            int czas;       //definiuje zmienne poza switch
            int temp;
            int ilosc;

            while ((pozycja = linia.find(srednik)) != string::npos) //maksymalna warosc rozmiaru string
                                                                    //dzieli  moj string na miejsze stringi
            {
                Potrawa nowa;
                numer ++;
                wycinek = linia.substr(0, pozycja); //definiuje długość jednej zmiennej

                switch (numer)
                {
                case 1:
                    numer_id = stoi(wycinek);
                    //cout<<"numer id :"<<wycinek<<endl;
                    break;
                case 2:
                    nazwa_z_pliku = wycinek;
                    //cout<<"nazwa: "<<nazwa_z_pliku<<endl;
                    break;                                  //poszczegolnie dodaje mniejsze stringi oddzielone srednikami do elementow struktury
                case 3:
                    czas = stoi(wycinek);
                    //cout<<"czas: "<<wycinek<<endl;
                    break;
                case 4:
                    temp = stoi(wycinek);
                    //cout<<"temp: "<<wycinek<<endl;
                    break;
                case 5:
                    ilosc = stoi(wycinek);
                    //cout<<"ilosc: "<<wycinek<<endl;
                    nowa.UstawPotrawe(
                                      numer_id,
                                      nazwa_z_pliku,
                                      czas,
                                      temp,
                                      ilosc
                                      ); // dodaje nowa potrawe do menu
                    menu.push_back(nowa);
                    //cout<<nowa.ilosc;
                    cout<<endl;
                    break;

                }
                linia.erase(0, pozycja + srednik.length()); // wymazuje linijke
            }
        }
        while(!plik.eof()); // warunek na koniec pliku
        plik.close();  //zamknięcie pliku

    }
}

void Wyswietl_Menu( vector <Potrawa> &menu)
{
    for(int i =0; i<menu.size() ; i++)
    {
        cout<<"Numer w menu: "<<menu[i].getId()<<endl;
        cout<<"Nazwa potrawy: " << menu[i].getNazwa()<<endl;
        cout<<"Ilosc: "<<menu[i].ilosc<<endl;
    }
}

#endif //CZYTANIE_H

