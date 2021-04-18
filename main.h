#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include <fstream>
#include "potrawa.h"

void Czytanie_z_pliku(std::vector <Potrawa> &menu);
void Wyswietl_Menu(std::vector <Potrawa> &menu);
void Wyrzuc_Potrawe(std::vector <Potrawa> &aMenu, int aIndeks);
Potrawa Wybierz_Potrawe(std::vector <Potrawa> &menu);


#endif
