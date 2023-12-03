#include "cEtappe.h"
const int anzahlstadt = 12;



int main() {
	string startStadt;
	cStadt staedte[anzahlstadt] = {
	cStadt("Hamburg", "Toulouse", "Paris", "", ""),
	cStadt("Berlin", "Korsika", "", "", ""),
	cStadt("Dortmund", "Korsika", "", "", ""),
	cStadt("Leipzig", "Nizza", "", "", ""),
	cStadt("Dresden", "Nizza", "", "", ""),
	cStadt("Koeln", "Nizza", "Korsika", "Paris", ""),
	cStadt("Paris", "Koeln", "Stuttgart", "Muenchen", "Hamburg"),
	cStadt("Stuttgart", "Korsika", "Paris", "", ""),
	cStadt("Muenchen", "Paris", "", "", ""),
	cStadt("Nizza", "Koeln", "Leipzig", "Dresden", ""),
	cStadt("Toulouse", "Hamburg", "", "", ""),
	cStadt("Korsika", "Stuttgart", "Koeln", "Dortmund", "Berlin")
	};
	cout << "Geben sie ihre Start Location an: ";
	cin >> startStadt;
	cout << endl;
	cEtappe etappe1 = cEtappe();
	etappe1.findeStadt(staedte,startStadt);
}