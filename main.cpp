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
    vector <Potrawa> menu;
    Potrawa JakasPotrawa;

    Czytanie_z_pliku(menu);

    //spaghetti.UstawPotrawe(0,"Spaghetti",15,40,1);
    JakasPotrawa = mikrofala.Wybierz_potrawe(menu, 0);

    Wyswietl_Menu(menu);

    cout<<endl;

    JakasPotrawa.Sprawdz_potrawe();

    Wyrzuc_Potrawe(menu, 0);
    Wyrzuc_Potrawe(menu, 0);
    Wyswietl_Menu(menu);

    /*cout << "ID: " << spaghetti.getId();
    cout << "Nazwa: " << spaghetti.getNazwa();*/ //Funkcje testowe

    return(0);
}

