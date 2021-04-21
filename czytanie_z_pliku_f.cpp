#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <ios>
#include <limits>

#include "main.h"
#include "potrawa.h"

using namespace std;

void OgraniczCin(int aWejscie, int ZabronUjemne = false) //Funkcja do sprawdzania poprawnosci danych wejscia,
{                                                       //zabrania wpisywania blednych lub ujemnych wartosci. UZYWAC TYLKO PO cin!
        while(!std::cin || (aWejscie<0) && ZabronUjemne==1)      //Jesli ZabronUjemne = 1, funkcja potraktuje kazda wartosc <0 jako bledna
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout<<"Niepoprawna wartosc. Sprobuj podac liczbe";
            if (ZabronUjemne==1)
            {
                std::cout<<" wieksza lub rowna 0";
            }
            std::cout<<": ";
            std::cin>>aWejscie;     //Powtarza tego samego cin'a, ktorego mial
        }
}

void Czytanie_z_pliku(vector <Potrawa> &aMenu)
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
            Potrawa nowa;
            int numer_id;
            string nazwa_z_pliku;
            int czas;       //definiuje zmienne poza switch
            int temp;
            int ilosc;

            while ((pozycja = linia.find(srednik)) != string::npos) //maksymalna warosc rozmiaru string
                       //dzieli  moj string na miejsze stringi
                                                                    //dzieli  moj string na miejsze stringi
            {

                //int numer_id;
                //string nazwa;
               // int czas;       //definiuje zmienne poza switch
                //int temp;
                //int ilosc;
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
                        aMenu.push_back(nowa);
                        //cout<<nowa.ilosc<<endl;
                        //cout<<nowa.getNazwa();
                        //cout<<nowa.ilosc;
                        //cout<<endl;
                        break;

                     }
                linia.erase(0, pozycja + srednik.length()); // wymazuje linijke
            }
        }
        while(!plik.eof()); // warunek na koniec pliku
        plik.close();  //zamknięcie pliku
        plik.close();  //zamknięcie pliku

    }

}

//Funkcja wyswietlająca listę potraw

void Wyswietl_Menu(vector <Potrawa> &aMenu)
{
    cout<<"============== MENU ==============="<<endl;
    for(int i =0; i<aMenu.size() ; i++)
    {
        int dlugosc = 36; //dlugosc menu
        int numer = 0;
        if (aMenu[i].getId() >= 10 ) // warunek na liczby 2 cyfrowe
        {
            numer = 2;
        }
        else
        {
            numer = 1;
        }
        int koniec = 4 + numer + 4 + aMenu[i].getNazwa().size() + 3 ;
        int liczba_spacji = dlugosc - koniec; //ile spacji potrzeba do zapelnienia
        cout<<"|  "<<aMenu[i].getId()<<" - "<<aMenu[i].getNazwa()<<" x"<<aMenu[i].ilosc;
        for (int i = 0; i < liczba_spacji; i++)
        {
            cout<<" ";
        }
        /*cout<<"Numer w menu: "<<aMenu[i].getId()<<endl;
        cout<<"Nazwa potrawy: " << aMenu[i].getNazwa()<<endl;
        cout<<"Ilosc: "<<aMenu[i].ilosc<<endl;*/
        cout<<"|"<<endl;
    }
    cout<<"==================================="<<endl;
}

//Funkcja zmniejszająca ilość potrawy i usuwająca cały obiekt jeśli ilość<=1

void Wyrzuc_Potrawe(vector <Potrawa> &aMenu, int aIndeks)
{
    aMenu[aIndeks].ilosc--;
    if(aMenu[aIndeks].ilosc<=0)
    {
        aMenu.erase(aMenu.begin()+aIndeks);
        for(int i=aIndeks; i<aMenu.size(); i++)   //Po wyrzuceniu potrawy zmienia indeks wszystkich nastepujacych potraw
        {
            aMenu[i].indeks = i;
        }
    }

}

Potrawa Wybierz_Potrawe(vector <Potrawa> &aMenu) //wybrana
{
    Potrawa wybrana;
    int numer = 0;
    //cout<<menu.size();
    while (numer >= 0)
    {
        cout<<" Prosze podaj numer dania z naszego menu: "<<endl;
        cin>>numer;
        /*while(!std::cin || numer<0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout<<"Niepoprawna wartosc. Sprobuj ponownie: ";
                std::cin>>numer;
            }
        */
        OgraniczCin(numer, 1);
        if (numer < aMenu.size() && numer >= 0 )
        {
            wybrana = aMenu[numer];
            //cout<<wybrana.getNazwa();
            system( "cls" );
            cout<<string(5, '\n');
            cout<<"Wybrales danie: "<<endl;
            cout<<endl;
            wybrana.Sprawdz_potrawe();
            Wyrzuc_Potrawe(aMenu, numer); //
            numer = -1; //Poprawnie wybrano danie, koniec petli
        }
        else
        {
            cout<<"Takie danie nie istnieje !"<<endl;
        }
    }


    return wybrana;
}

void Stop() //zamunanie programu
{
    char znak = '0'; 
    std::cout<<"Czy chcesz zakonczyc gotowanie? T/N "<<std::endl;
    std::cin>>znak; 
    if (znak == 'T' || znak == 't')
    {
        exit(0);
    }
    else{

    }
