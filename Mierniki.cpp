#include <iostream>
#include <cmath>
#include "Mierniki.h"

using namespace std;


 float suma,war,sr;
 double iloczyn;
 const int a=55;
 const int b=65;


//******************************************************************************************
   float Mierniki::srednia(int ile, float *czas)                      //srednia artmetyczna
     {
         suma=0;
         for (int i = 0 ; i < ile ; ++i)
             {
                 suma+=czas[i];
             }
         return suma/ile;
     }
//******************************************************************************************
   float Mierniki::sredniaHarmoniczna(int ile, float *czas)                     //srednia harmoniczna
     {
         suma=0;
         for (int i = 0 ; i < ile ; ++i)
             {
                 suma+=(1/czas[i]);
             }
         return ile/suma;
     }
//******************************************************************************************
   float Mierniki::sredniaGeometryczna(int ile, float *czas)                     //srednia geometryczna
     {
        iloczyn=1;
        for (int i = 0 ; i < ile ; ++i)
            {
                iloczyn*=czas[i];
            }
         return exp(log(iloczyn)/ile);
     }
//******************************************************************************************
   float Mierniki::wariancja(int ile,float *czas)                     //wariancja
     {
         war=0;
         for(int i = 0 ; i < ile ; ++i)
              war+=pow((czas[i]-srednia(ile,czas)),2);
         return war/(ile-1);
     }
//******************************************************************************************
   void Mierniki::sortowanie(int ilosc, float *tablica)               //sortowanie do modalnej
     {
          for (int i=0;i<ilosc-1;++i)
               {
                  for (int j=0;j<ilosc-1;++j)
                      {
                          if (tablica[j]>tablica[j+1])
                              swap(tablica[j],tablica[j+1]);
                      }
              }
     }
//******************************************************************************************
   int Mierniki::modalna(int ile, float *czas)                        //modalna
     {
        int maks = 0;
        int licz = 0;
        int indeks = 0;
        int i = 0;
        sortowanie(ile,czas);
        for ( i = 0 ; i < ile ; ++i)
         {
             licz = 0;
             for ( int j = i+1 ; j < ile; ++j)
                 {
                     if (czas[i] == czas[j])
                         licz++;
                 }
             if (licz > maks)
                 {
                     maks = licz;
                     indeks = i;
                 }
         }
        return czas[indeks];
     }
//******************************************************************************************
   int Mierniki::mediana(int ile, float *czas)                        //mediana
     {
        int media;
        if(ile%2==0)
            media=(ile/2)-1;
        else
            media=ile/2;
        return czas[media];
     }
//******************************************************************************************
   float Mierniki::odchylenieStandardowe(int ile, float *czas)                //odchylenie standardowe
     {
        return sqrt(wariancja(ile,czas));
     }

   float Mierniki::odchylenieOdSredniej(int ile, float *czas)               //odchylenie od sredniej
     {
         sr=0;
         for (int i = 0 ; i < ile ; ++i)
            sr+=abs(czas[i]-srednia(ile,czas));
         return sr/ile;
     }

   int Mierniki::maksimum(int ile, float *czas)                           //maksimum
     {
         int maks=czas[0];
         for(int i=1;i<ile;++i)
            if(maks<czas[i])
                maks=czas[i];
         return maks;
     }

   int Mierniki::minimum(int ile, float *czas)                            //minimum
     {
         int min=czas[0];
         for(int i=1;i<ile;++i)
            if(min>czas[i])
                min=czas[i];
         return min;
     }
    int Mierniki::rozstep(int ile, float *czas)
     {
         return maksimum(ile, czas)-minimum(ile, czas);
     }
