// a kutya oszt�lyt az allat oszt�lyb�l sz�rmaztatjuk
// a kutya oszt�ly �r�kli az allat oszt�ly minden
// tulajdons�g�t, f�ggv�nyeit, param�tereit
// A kutya oszt�ly rendelkezni fog ezeken k�v�l
// egy konstruktorral �s egy destruktorral, amelyek
// f� szerepe helyfoglal�s a mem�ria meghat�rozott
// c�m�t�l kezdve
// L�tunk m�g egy csak a kuty�kra jellemz� tulajdons�got,
// az ugat�s f�ggv�nyt.

class kutya : public allat
{
public:
kutya(int k);
~kutya();
void ugat();

};
