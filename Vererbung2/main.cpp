#include <iostream>
#include <string>

using namespace std;

// TODO Zur Vereinfachung Klassendefinioten usw alles in einer Datei



// Basisklasse
class Tier
{
public:
	void fressen(string nahrung) { cout << "Tier frisst gerade " << nahrung << " nom nom nom" << endl; };
};

// Abgeleitete Klasse der Basisklasse
class Vogel : public Tier
{
public:
	void fliegen() { cout << "Jetzt wird gefolgen" << endl; }

};



class Papagei : public Vogel
{
public:
	void sprechen() { cout << "Vogel spricht Bla bli blub" << endl; }
};





// Main function
int main()
{
	cout << "Program zu Vererbung2" << endl << endl;

	Tier ameise1;
	ameise1.fressen("Zucker");


	Vogel vogel1;
	vogel1.fressen("Muecken");
	vogel1.fliegen();


	Papagei papagei1;
	papagei1.fressen("Grillburger mit Kaese");
	papagei1.fliegen();
	papagei1.sprechen();



	system("pause");
	return 0;
}