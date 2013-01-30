// a kutya osztályt az allat osztályból származtatjuk
// a kutya osztály örökli az allat osztály minden
// tulajdonságát, függvényeit, paramétereit
// A kutya osztály rendelkezni fog ezeken kívül
// egy konstruktorral és egy destruktorral, amelyek
// fõ szerepe helyfoglalás a memória meghatározott
// címétõl kezdve
// Látunk még egy csak a kutyákra jellemzõ tulajdonságot,
// az ugatás függvényt.

class kutya : public allat
{
public:
kutya(int k);
~kutya();
void ugat();

};
