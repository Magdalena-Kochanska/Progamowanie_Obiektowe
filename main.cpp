#include <iostream>
#include <vector>
#include "header.h"
#include "funkcje.cpp"

using namespace std;

int main()
{
    Mikrofala mikrofala;
    Potrawa spaghetti;

    spaghetti.UstawPotrawe(0,"Spaghetti",15,40,1);
    /*cout << "ID: " << spaghetti.getId();
    cout << "Nazwa: " << spaghetti.getNazwa();*/ //Funkcje testowe

    return(0);
}

