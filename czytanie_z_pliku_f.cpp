#include <iostream>
#include <vector>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>
#include <cstdlib>


#include "main.h"
#include "potrawa.h"

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
                        menu.push_back(nowa);
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

void Wyswietl_Menu(vector <Potrawa> &menu)
{
    cout<<"============== MENU ==============="<<endl;
    for(int i =0; i<menu.size() ; i++)
    {
        int dlugosc = 36; //dlogosc menu 
        int numer = 0;
        if (menu[i].getId() >= 10 ) // warunek na liczby 2 cyfrowe
        {
            numer = 2; 
        }
        else
        {
            numer = 1; 
        }
        int koniec = 4 + numer + 4 + menu[i].getNazwa().size() + 3 ;  
        int liczba_spacji = dlugosc - koniec; //ile spacji potrzeba do zapelnienia
        cout<<"|  "<<menu[i].getId()<<" - "<<menu[i].getNazwa()<<" x"<<menu[i].ilosc;
        for (int i = 0; i < liczba_spacji; i++)
        {
            cout<<" ";
        }
        /*cout<<"Numer w menu: "<<menu[i].getId()<<endl;
        cout<<"Nazwa potrawy: " << menu[i].getNazwa()<<endl;
        cout<<"Ilosc: "<<menu[i].ilosc<<endl;*/
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
    }
}

Potrawa Wybierz_Potrawe(vector <Potrawa> &menu) //wybrana 
{
    Potrawa wybrana;
    int numer = 0;    
    //cout<<menu.size();
    for(int i = 1; i>0 ; i++)
    {
        cout<<" Prosze podaj numer dania z naszego menu: "<<endl;
        cin>>numer;

        if (numer < menu.size() && numer >= 0 )
        {
            wybrana = menu[numer]; 
            //cout<<wybrana.getNazwa();
            system( "cls" );
            cout<<"Wybrales danie: "<<endl;
            cout<<endl;
            wybrana.Sprawdz_potrawe();
            Wyrzuc_Potrawe(menu, numer);
            i = -1; 
        }
        else 
        {
            cout<<"Takie danie nie istnieje !"<<endl; 

        }
    }
    
    
    return wybrana;
}