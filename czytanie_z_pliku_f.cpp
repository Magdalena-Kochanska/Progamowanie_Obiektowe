
#include <iostream>
#include <vector> 
#include <string>
#include <conio.h>
#include <fstream>

using namespace std;

class Potrawa
{
    private:
    int indeks;
    string nazwa;
    int czas_przyg;
    int temp_przyg;
    //enum Stan{surowa, przygotowana, spalona};

    public:
    int ilosc;

    void UstawPotrawe(int aIndeks, string aNazwa, int aCzas, int aTemp, int aIlosc)
    {
        this->indeks = aIndeks;
        this->nazwa = aNazwa;
        this->czas_przyg = aCzas;
        this->temp_przyg = aTemp;
        this->ilosc = aIlosc;
    }
    int getId()
    {
        return indeks;   
    }

    string getNazwa()
    {
        return nazwa;
    }

    int getCzas()
    {
        return czas_przyg;
    }

    int getTemp()
    {
        return temp_przyg;
    }
   
};

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
            
           
            getline( plik, linia); 
            size_t pozycja = 0; //zmienna do rozmiaru linijki 
            int numer =0;
            string wycinek;

            while ((pozycja = linia.find(srednik)) != string::npos) //maksymalna warosc rozmiaru string
                       //dzieli  moj string na miejsze stringi
            {
                Potrawa nowa;
                int numer_id;
                string nazwa;
                int czas;       //definiuje zmienne poza switch
                int temp;
                int ilosc; 
                numer ++;
                wycinek = linia.substr(0, pozycja); //definiuje długość jednej zmiennej 

                switch (numer) 
                {
                case 1:
                    numer_id = stoi(wycinek);
                    //cout<<"numer id :"<<wycinek<<endl;
                    break;
                case 2:
                    nazwa = wycinek;
                    //cout<<"nazwa: "<<nazwa<<endl;
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
                    nowa.UstawPotrawe(numer_id, nazwa, czas, temp, ilosc); // dodaje nowa potrawe do menu
                    menu.push_back(nowa);
                    //cout<<nowa.ilosc; 
                    cout<<endl;
                    break;

                }   
                linia.erase(0, pozycja + srednik.length()); // wymazuje linijke 
            }
        }
        while(!plik.eof()); // warunek na koniec pliku
        plik.close();  //zamknięcie pliku 

    }      
}

void Wyswietl_Menu( vector <Potrawa> &menu)
{
    for(int i =0; i<menu.size() ; i++)
    {
        cout<<"Numer w menu: "<<menu[i].getId()<<endl;
        cout<<"Nazwa potrawy: " << menu[i].getNazwa()<<endl;
        cout<<"Ilosc: "<<menu[i].ilosc<<endl;
    }
}

main()
{
    vector <Potrawa> menu;
    Czytanie_z_pliku(menu);
    Wyswietl_Menu(menu);
    //cout << menu.size();
    return 0;

}