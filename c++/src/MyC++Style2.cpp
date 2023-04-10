//pierwsze idą nagłówki stl
#include <iostream>
//potem idą nagłówki związane z projektem
#include "MyC++Style.hpp"

//implementujemy funkcje mojej klasy

//implementujemy konstruktory
MyCppStyle::MojaKlasa::MojaKlasa(){
    for(int i = 0;i<10;i++){//klamra odrazu po nawiasie
        if(i == 5){//klamra odrazu po nawiasie
            std::cout << "5" << std::endl;//w przypadku cout spacja
        }
        if(i==3)//w przypadku sprawdzania bez spacji
            std::cout << "3";//brak klamry następne polecenie po tabie
    }
}
MyCppStyle::MojaKlasa::MojaKlasa(int a, int b){
    a = a + b;//w przypadku matematyki bez nawiasów spacje
    b = (a*2)+4;// w przypacku matematyki z nawiasami bez spacji
}

//implementujemy desktruktory
MyCppStyle::MojaKlasa::~MojaKlasa(){
    std::cout << "nima mnie" << std::endl;//w przypadku cout spacja
}

//implementujemy metody
void MyCppStyle::MojaKlasa::drukujB(){//mogło być drukujZmiennąB
    std::cout << "b" << std::endl;//w przypadku cout spacja
}
int MyCppStyle::MojaKlasa::dajA(){
    return a;
}

//implementujemy operatory
MyCppStyle::MojaKlasa MyCppStyle::MojaKlasa::operator+(MyCppStyle::MojaKlasa m){
    return MojaKlasa(a+m.a,b+m.b);
}

//implementujemy pozostałe funkcje
int MyCppStyle::dodajCyfry(int a, int b){
    return a+b;//w przypadku return bez spacji
}

//definiujemy zmienne zewnętrzne
int MyCppStyle::zmiennaZewnetrzna = 0;// w przypadku przypisania wartość z spacjami
