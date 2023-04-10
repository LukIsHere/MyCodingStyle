#pragma once

//zamykamy funkcje w nagłówku
namespace MyCppStyle{
    //deklaracja klasy
    /*
    nie robimy
    class MojaKlasa : public InnaKlasa{
        to jest zawsze głupi pomysł
        możesz trzymać InnaKlasa wewnątrz tej klasy
        nigdy nie rozszerzaj klasy
    }
    */
    class MojaKlasa{//CamelCase
        private:
            //deklarujemy zmienne przywatne
            int a = 0;//camelCase
        public:
            //deklarujemy zmienne publiczne
            int b = 0;//camelCase
            //deklarujemy konstruktor
            MojaKlasa();
            MojaKlasa(int a, int b);
            //deklarujemy destruktor
            ~MojaKlasa();//jeśli jest potrzebny
            //deklarujemy metody

            // wypisuje b do konsoli
            void drukujB();//coRobiNaCzym camelCase

            // zwrace zmienną a
            int dajA();//coRobiNaCzym camelCase
            
            // ustawia zmienną a
            // a : zmienna do ustawienia
            void ustawA(int a);//coRobiNaCzym camelCase

            //deklarujemy operatory
            MojaKlasa operator+(MojaKlasa);//camelCase
    };
    //delarujemy funkcje
    int dodajCyfry(int a, int b);//coRobiNaCzym camelCase
    //deklarujemy zmienne wbudowane
    inline int zmiennaWbudowana = 0;//coCzego camelCase
    //deklarujemy zmienne zewnętrzne
    extern int zmiennaZewnetrzna ;//coCzego camelCase
}