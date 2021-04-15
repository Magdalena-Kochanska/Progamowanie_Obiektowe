#include <iostream>
#include <vector>
#include "mikrofala.h"
#include "potrawa.h"
#include "mikrofala.cpp"
#include "potrawa.cpp"

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

