#include <iostream>
#include <vector>
#include "header.h"
#include "funkcje.cpp"

using namespace std;

int main()
{
    Mikrofala *mikrofala = new Mikrofala;
    Potrawa *spaghetti = new Potrawa;

    spaghetti->UstawPotrawe(0,"Spaghetti",15,40,1);

    return(0);
}

