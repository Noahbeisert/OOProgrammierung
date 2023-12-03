 // Hilfsklasse fuer den Verbindungsplan
#include <iostream>
using namespace std;
class cStadt {
private:
	string stadtName;
	string ziele[4];
public:
	cStadt();
	cStadt(string, string, string, string, string);
	string get_Name();
	void listeZiele(); // Gibt Name und mögliche Ziele der Stadt aus
	bool checkZiel(string zi); // Prueft zi auf gueltiges Ziel
	bool checkStadt(cStadt* staedte, string stadt);
	// Prueft die Existenz von stadt
};