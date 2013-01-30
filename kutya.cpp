// csak a kutyára vonatkozó függvényeket
// implementáljuk
// a szükséges definíciókat tartalmazó fejlécfájlokat
// meghívjuk: include
// a kutya objektum konstruktora kezdõértéket is kap
// a destruktor azt is kiírja, hogy vége az életének

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

