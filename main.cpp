#include <iostream>
#include "Mierniki.h"
using namespace std;

int main()
{
    const int iloscCyferek=11;
    float szeregPrzedzialowy[iloscCyferek]={1,2,3,4,6,7,9,10,11,12,100};
    Mierniki x;


    cout<<"Srednia artmetyczna wynosi: "
        <<x.srednia(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Srednia harmoniczna: "
        <<x.sredniaHarmoniczna(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Srednia geometryczna wynosi: "
        <<x.sredniaGeometryczna(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Wariancja wynosi: "
        <<x.wariancja(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Modalna wynosi: "
        <<x.modalna(iloscCyferek, szeregPrzedzialowy)<<"\n";
    cout<<"Mediana wynosi: "
        <<x.mediana(iloscCyferek, szeregPrzedzialowy)<<"\n";
    cout<<"Odchylenie standardowe wynosi: "
        <<x.odchylenieStandardowe(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Odchylenie od sredniej wynosi: "
        <<x.odchylenieOdSredniej(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Maksimum wynosi: "
        <<x.maksimum(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Minimum wynosi: "
        <<x.minimum(iloscCyferek,szeregPrzedzialowy)<<"\n";
    cout<<"Rozstep wynosi: "
        <<x.rozstep(iloscCyferek,szeregPrzedzialowy)<<"\n";

    return 0;
}
