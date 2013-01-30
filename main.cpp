// Ez a f�program forr�s�llom�nya
// Itt �ll �ssze a teljes k�p a r�szekb�l.
// H�vjuk a sz�ks�ges defin�ci�kat (include),
// a sz�ks�ges be �s kimenetr�l gondoskod� be�p�tett
// f�ggv�nyeket (iostream) �s n�vteret
//
// P�d�nyos�tunk egy kutya objektumot, hektor n�ven �letkor =2
// kezd��rt�kkel, haszn�ljuk a defini�lt f�ggv�nyeket
// Az eredm�ny az lesz, hogy a konzolon el�sz�r a konstruktorban
// megadott kezd��letkor jelenik meg, majd a m�dos�tott �letkor,
// ki�rja az ugat() f�ggv�nyben megadott karaktersort (Vauuuu!),
// majd az objektum destruktor�nak (leboml�s�nak) v�g�n ki�rja, 
// hogy "v�ge az �let�nek" 
// Val�j�ban a destruktorn�l a lefoglalt mem�riahely felszabadul

#include <iostream>

#include "allat.h"
#include "kutya.h"

using namespace std;

int main()
{
kutya hektor(2);
cout << "Hektor kora: " << hektor.get_kora() << endl;
hektor.set_kora(5);
cout << "Hektor kora: " << hektor.get_kora() << endl;
hektor.ugat();
return 0;
}
