#include "mikrofala.h"
#include "main.h"
#include <vector>


//Mikrofala

/*
int Mikrofala::Ustaw_temp(int aTemp , int aCzas, int( * Ustawienia )( int, int ))
{   
    return Ustawienia(aTemp, aCzas);
};*/

void Mikrofala::Ustaw(Potrawa  obiekt)
{
    auto nTemp = 0;
    auto nCzas = 0;

    std::cout<< "Potrzebne parametry:"<<std::endl;
    std::cout<<"Optymalny czas przygotowania: "<<obiekt.getCzas()<<std::endl;
    std::cout<<"Optymalna temperatura przygotowania: "<<obiekt.getTemp()<<std::endl;
    std::cout<<"Podaj parametry temperatury: ";
    std::cin>>nTemp;
    std::cout<<"Podaj parametry czasu: ";
    std::cin>>nCzas;
    //warunek sprawdzający cin na tylko liczby     
    
            if( nCzas > obiekt.getCzas() && nTemp > 30)
                {
                    std::cout<<"Potrawa zostala spalona! "<<std::endl;
                }
            else if( nCzas < obiekt.getCzas() && nTemp <30 )
                {
                    std::cout<<"Potrawa jest surowa! "<<std::endl;
                }
            else if ( (obiekt.getCzas() - 5 )>= nCzas <=(obiekt.getCzas() + 5)  && (obiekt.getTemp() - 5 )>= nTemp <=(obiekt.getTemp() + 5) )
                {
                    std::cout<<"Potrawa "<< obiekt.getNazwa() <<" jest gotowa! "<<std::endl; 
                    
                }
    
    
}
