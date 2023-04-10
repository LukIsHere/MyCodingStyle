//pierwsze idą nagłówki stl
#include <iostream>
//potem idą nagłówki związane z projektem
#include "MyC++Style.hpp"

//nie używamy using namespace std;
using namespace MyCppStyle;//możemy dla namaspace'ów w naszym projekcie

//tworzymy zmienne globalne
MojaKlasa klasaNumerJeden;//camelCase

//tworzymy funkcje main
int main(){
    //tworzymy zmienne
    MojaKlasa klasaNumerDwa = MojaKlasa(2,2);//możemy też definiować tak
    //robimy co do nas należy
    int liczbaA = klasaNumerJeden.dajA();
    klasaNumerDwa.drukujB();
    
    return 0;//możemy zwrócić nie musimy
}