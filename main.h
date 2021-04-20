#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>
#include "potrawa.h"

void OgraniczCin(int aWejscie, int ZabronUjemne);
void Czytanie_z_pliku(std::vector <Potrawa> &aMenu);
void Wyswietl_Menu(std::vector <Potrawa> &aMenu);
void Wyrzuc_Potrawe(std::vector <Potrawa> &aMenu, int aIndeks);
Potrawa Wybierz_Potrawe(std::vector <Potrawa> &aMenu);


#endif
