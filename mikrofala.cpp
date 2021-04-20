#include <vector>

#include "mikrofala.h"
#include "main.h"


//Mikrofala

/*
int Mikrofala::Ustaw_temp(int aTemp , int aCzas, int( * Ustawienia )( int, int ))
{
    return Ustawienia(aTemp, aCzas);
};*/

void Mikrofala::Ustaw(Potrawa aObiekt)  //Funkcja
{
    int nTemp = 0;     //
    int nCzas = 0;
    const int tempLimit = 5;    //Granice +/- w których musi zawierać się podana temperatura aby danie zostało przygotowane
    const int czasLimit = 10;   //Granice +/- w których musi zawierać się podany czas aby danie zostało przygotowane

    std::cout<< "Potrzebne parametry:"<<std::endl;
    std::cout<<"Optymalny czas przygotowania: "<<aObiekt.getCzas()<<" min"<<std::endl;
    std::cout<<"Optymalna temperatura przygotowania: "<<aObiekt.getTemp()<<" C"<<std::endl;
    std::cout<<"Podaj parametry temperatury (w stopniach Celcjusza): ";
    std::cin>>nTemp;
    OgraniczCin(nTemp, true);
    std::cout<<"Podaj parametry czasu (w minutach): ";
    std::cin>>nCzas;
    OgraniczCin(nCzas, true);

        std::cout<<std::endl;

            if( (nCzas > (aObiekt.getCzas() + czasLimit) && nTemp > 30) || (nTemp > (aObiekt.getTemp() + tempLimit)))    //Potrawa spalona jeśli podany czas wykracza poza górną granicę czasu
                {                                                                                                                 //
                    std::cout<<"Potrawa zostala spalona!"<<std::endl;
                }
            else if ( ((aObiekt.getCzas() - czasLimit ) <= nCzas) && (nCzas <=(aObiekt.getCzas() + czasLimit)) && ((aObiekt.getTemp() - tempLimit ) <= nTemp) && (nTemp <=(aObiekt.getTemp() + tempLimit)))
                {
                    std::cout<<"Potrawa "<< aObiekt.getNazwa() <<" jest gotowa! "<<std::endl;

                }
            else
                {
                    std::cout<<"Potrawa jest wciaz surowa!"<<std::endl;
                }


}
