// Ez a fõprogram forrásállománya
// Itt áll össze a teljes kép a részekbõl.
// Hívjuk a szükséges definíciókat (include),
// a szükséges be és kimenetrõl gondoskodó beépített
// függvényeket (iostream) és névteret
//
// Pédányosítunk egy kutya objektumot, hektor néven életkor =2
// kezdõértékkel, használjuk a definiált függvényeket
// Az eredmény az lesz, hogy a konzolon elõször a konstruktorban
// megadott kezdõéletkor jelenik meg, majd a módosított életkor,
// kiírja az ugat() függvényben megadott karaktersort (Vauuuu!),
// majd az objektum destruktorának (lebomlásának) végén kiírja, 
// hogy "vége az életének" 
// Valójában a destruktornál a lefoglalt memóriahely felszabadul

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
