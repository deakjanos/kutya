// csak a kuty�ra vonatkoz� f�ggv�nyeket
// implement�ljuk
// a sz�ks�ges defin�ci�kat tartalmaz� fejl�cf�jlokat
// megh�vjuk: include
// a kutya objektum konstruktora kezd��rt�ket is kap
// a destruktor azt is ki�rja, hogy v�ge az �let�nek

#include <iostream>
#include "allat.h"
#include "kutya.h"

using namespace std;

kutya::kutya(int k)
{
kor = k;
}
kutya::~kutya()
{
cout << "eletenek vege" << endl;
}

void kutya::ugat()
{
cout << "Vauuuu!" << endl;
}

