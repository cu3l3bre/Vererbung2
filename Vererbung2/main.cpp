#include <iostream>
#include <string>

using namespace std;

// TODO Zur Vereinfachung Klassendefinioten usw alles in einer Datei


//-----------------------------------------------------------//
// Ableitung/Vererbung der Klassen
//	  Tier
//		|
//		|
//		v
//	  Vogel
//		|
//		|
//		v
//	 Papagei


// Basisklasse
class Tier
{
public:
	void fressen(string nahrung) { cout << "Tier frisst gerade " << nahrung << " nom nom nom" << endl; };
};

// Abgeleitete Klasse Vogel der Basisklasse Tier
class Vogel : public Tier
{
public:
	void fliegen() { cout << "Jetzt wird gefolgen" << endl; }

};


// Abgeleitete Klasse Papagei der abgeleiteten Klasse Vogel
class Papagei : public Vogel
{
public:
	void sprechen() { cout << "Vogel spricht Bla bli blub" << endl; }
};

//-----------------------------------------------------------//

// Verberbungsbaum
// Basisklasse - Verallgemeinerung
class Person
{
public:
	string vorname;
	string nachname;
};


// spezialisierte Klasse
class Kunde : public Person
{
public:
	int kundenNummer;
};


class Mitarbeiter : public Person
{
public:
	double gehalt;
};



// Main function
int main()
{
	cout << "Program zu Vererbung2" << endl << endl;

	//-----------------------------------------------------------//

	Tier ameise1;
	ameise1.fressen("Zucker");


	Vogel vogel1;
	vogel1.fressen("Muecken");
	vogel1.fliegen();


	Papagei papagei1;
	papagei1.fressen("Grillburger mit Kaese");
	papagei1.fliegen();
	papagei1.sprechen();

	//-----------------------------------------------------------//
	
	Person heinz;
	heinz.vorname = "Heinz";
	heinz.nachname = "Mueller";

	Kunde lisa;
	lisa.vorname = "Lisa";
	lisa.nachname = "Scheider";
	lisa.kundenNummer = 1337;


	Mitarbeiter jochen;
	jochen.vorname = "Jochen";
	jochen.nachname = "der Rochen";
	jochen.gehalt = 1337.666;
	
	//-----------------------------------------------------------//

	system("pause");
	return 0;
}