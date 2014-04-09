
#ifndef MIERNIKI_H_INCLUDED
#define MIERNIKI_H_INCLUDED

class Mierniki
{

 public:
 float suma,war,sr;
 double iloczyn;
 const int a=55;
 const int b=65;
   float srednia(int ile, float *czas);

   float sredniaHarmoniczna(int ile, float *czas);

   float sredniaGeometryczna(int ile, float *czas);

   float wariancja(int ile,float *czas);

   void sortowanie(int ilosc, float *tablica);

   int modalna(int ile, float *czas);

   int mediana(int ile, float *czas);

   float odchylenieStandardowe(int ile, float *czas);

   float odchylenieOdSredniej(int ile, float *czas);

   int maksimum(int ile, float *czas);

   int minimum(int ile, float *czas);

   int rozstep(int ile, float *czas);
};

#endif // MIERNIKI_H_INCLUDED
