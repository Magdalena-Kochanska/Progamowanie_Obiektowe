#include <iostream>
#include <vector>

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
};

class Uzytkownik
{
    string imie;

    void Wlacz();
    void Wybierz_potrawe();
    void Ustaw_czas();
    void Ustaw_temp();
    void Wyrzuc_potrawe();
    void Jeszcze_raz();
    void Zjedz();
    void Sprawdz_mikrofala();
    void Sprawdz_potrawa();

};

class Mikrofala
{
    int temp_mikro;
    int czas_dzialania;
    bool czy_dziala;
    Potrawa jaka_potrawa; // do ogarniêcia

    void Stop();
    void Gotowanie();

};

int main()
{
Potrawa *spaghetti = new Potrawa;
spaghetti->UstawPotrawe(0,"Spaghetti",15,40,1);

return(0);
}

