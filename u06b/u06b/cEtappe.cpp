#include "cEtappe.h"
const int anzahlstadt = 12;
cEtappe::cEtappe(cStadt startStadt, cStadt zielStadt, cEtappe* next) : startStadt(startStadt), zielStadt(zielStadt) {

}

cEtappe::cEtappe(cStadt startStadt) : startStadt(startStadt) {

}

cStadt* findeStadt(cStadt staedte[], string name) {
	for (int i = 0; i < anzahlstadt; i++) {
		if (name.compare(staedte[i].get_Name()) == 0) {
			return &staedte[i];
		}

	}
	return NULL;
}

void cEtappe::etaPlan(cStadt staedte[]) {
	string sZielStadt;
	startStadt.listeZiele();
	cout << "Bitte wählen sie ein Ziel ein: ";
	cin >> sZielStadt;
	findeStadt(staedte,sZielStadt);


}