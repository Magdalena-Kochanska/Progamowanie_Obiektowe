#include <iostream>
#include <vector>
#include "mikrofala.h"
#include "potrawa.h"
#include "main.h"

#include <string>
#include <conio.h>
#include <fstream>

using namespace std;


int main()
{
    Mikrofala mikrofala;
    vector <Potrawa> surowePotrawy;
    vector <GotowaPotrawa> przygotowanePotrawy;
    vector <SpalonaPotrawa> spalonePotrawy;
    SpalonaPotrawa JakasPotrawa;
    GotowaPotrawa JakasPotrawa2;
    bool isRunning = 1;

    //JakasPotrawa2.UstawPotrawe(1,"test",2,3,4);
    //przygotowanePotrawy.push_back(JakasPotrawa2);
    //JakasPotrawa.UstawPotrawe(1,"test",2,3,4);
    //spalonePotrawy.push_back(JakasPotrawa);

    Czytanie_z_pliku(surowePotrawy);
    do
    {
    Wyswietl_Menu(surowePotrawy);



    if (spalonePotrawy.empty()){cout<<"Brak spalonych potraw!"<<endl;}
    else{Wyswietl_Spalone(spalonePotrawy);}

    if (przygotowanePotrawy.empty()){cout<<"Brak przygotowanych potraw!"<<endl;}
    else{Wyswietl_Gotowe(przygotowanePotrawy);}



    mikrofala.Ustaw(Wybierz_Potrawe(surowePotrawy), spalonePotrawy, przygotowanePotrawy);
    ProgramStop();



    //cout<<endl;

    //JakasPotrawa.Sprawdz_potrawe();

    //Wyrzuc_Potrawe(menu, 0);
    //Wyrzuc_Potrawe(menu, 0);
    //Wyswietl_Menu(menu);

    /*cout << "ID: " << spaghetti.getId();
    cout << "Nazwa: " << spaghetti.getNazwa();*/ //Funkcje testowe

    }while(isRunning == 1);

    return(0);
}
