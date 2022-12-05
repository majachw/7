#include <string>
using namespace std;
const int N = 10;
struct osoba {
	;
	string nazwisko;
	double pensja;
	int liczba_dzieci;
	int rok_ur_dzieci[15];
	osoba(string _nazwisko, double _pensja)
	{
		nazwisko = _nazwisko;
		pensja = _pensja;
		liczba_dzieci = 0;
	}
	osoba()
	{
		nazwisko = "";
		pensja = 0;
		liczba_dzieci = 0;
	}
};
void wypisz(const osoba &o1);
void wprowadz(osoba &o1);