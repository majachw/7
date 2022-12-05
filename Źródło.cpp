#include "Nag³ówek.h"
#include<iostream>
using namespace std;

int main(int liczArg, char* tabArg[])//argc, argv
{
	
	/*cout << liczArg << endl;
	for (int i = 0; i < liczArg; ++i)
	{
		cout <<tabArg[i] << endl;

	}*/
	/*if (liczArg < 2)
	{
		cout << "za malo arg";
		return 0;
	}
	int liczba = atoi(tabArg[1]);
	if (liczba > 20)liczba = 20;
	int tab[20];
	for (int i = 0; i < 20; i++)
	{
		if (i < liczba)
			tab[i] = i;
		else
			tab[i] = 0;
		cout << tab[i] << " ";
	}*/
	osoba tab[N];




	osoba o1, o3;
	osoba o2("BBBB", 2000);
	//o1.nazwisko = "AAA";
	//o1.liczba_dzieci = 2;
	//o1.pensja =3000;
	//o1.rok_ur_dzieci[0]=2003;
	//o1.rok_ur_dzieci[1] = 2004;
	wypisz( o1);
	wprowadz( o1);
	wypisz(o2);
	wypisz(o3);
	wypisz(tab, N);
	
	
	return 0;
}
void wypisz(const osoba &os)
{
	cout << "Nazwisko: " << os.nazwisko << endl;
	cout << "Pensja: " << os.pensja << endl;
	cout << "Liczba dzieci: " << os.liczba_dzieci << endl;
	for(int i=0;i<os.liczba_dzieci;i++)
	cout << "Rok urodzenia dzieci: " << os.rok_ur_dzieci[i] << endl;
	
}
void wprowadz( osoba &o1)
{
	o1.nazwisko = "AAA";
	o1.liczba_dzieci = 2;
	o1.pensja = 3000;
	o1.rok_ur_dzieci[0] = 2003;
	o1.rok_ur_dzieci[1] = 2004;
}
void wypisztab()
{
	
}