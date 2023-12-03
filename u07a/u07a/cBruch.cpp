#include "cBruch.h"

cBruch::cBruch(int zaehler_in, int nenner_in) {
	zaehler = zaehler_in;
	if (nenner_in <= 0) {
		nenner = 1;
	}
	else {
		nenner = nenner_in;
	}
}

void cBruch::ausgabe() {
	cout << "Bruch: " << zaehler << "/" << nenner << endl;
	double ergebnis = zaehler / nenner;
}

void cBruch::kuerzen(cBruch bruch) {
	int gcd = ggT(zaehler, nenner);
	bruch.zaehler /= gcd;
	bruch.nenner /= gcd;
}

cBruch cBruch::addition(cBruch bruch1, cBruch bruch2) {
	int neuerZaehler = bruch1.zaehler * bruch2.nenner + bruch2.zaehler * bruch1.nenner;
	int neuerNenner = bruch1.nenner * bruch2.nenner;

	cBruch ergebnisBruch(neuerZaehler, neuerNenner);
	ergebnisBruch.kuerzen(ergebnisBruch);
	return ergebnisBruch;
}
cBruch cBruch::subtraktion(cBruch bruch1, cBruch bruch2) {
	int neuerZaehler = bruch1.zaehler * bruch2.nenner - bruch2.zaehler * bruch1.nenner;
	int neuerNenner = bruch1.nenner * bruch2.nenner;

	cBruch ergebnisBruch(neuerZaehler, neuerNenner);
	ergebnisBruch.kuerzen(ergebnisBruch);
	return ergebnisBruch;
}
cBruch cBruch::multiplikation(cBruch bruch1, cBruch bruch2) {
	int neuerZaehler = bruch1.zaehler * bruch2.zaehler;
	int neuerNenner = bruch1.nenner * bruch2.nenner;

	cBruch ergebnisBruch(neuerZaehler, neuerNenner);
	ergebnisBruch.kuerzen(ergebnisBruch);
	return ergebnisBruch;
}
cBruch cBruch::division(cBruch bruch1, cBruch bruch2) {
	int neuerZaehler = bruch1.zaehler * bruch2.nenner;
	int neuerNenner = bruch1.nenner * bruch2.zaehler;

	cBruch ergebnisBruch(neuerZaehler, neuerNenner);
	ergebnisBruch.kuerzen(ergebnisBruch);
	return ergebnisBruch;
}

void cBruch::tauschen(cBruch bruch1, cBruch bruch2) {
	cBruch helfer = bruch1;
	bruch1 = bruch2;
	bruch2 = helfer;
}

bool cBruch::vergleichen(cBruch bruch1, cBruch bruch2) {
	double bruch1Ergebenis = bruch1.zaehler / bruch1.nenner;
	double bruch2Ergebenis = bruch2.zaehler / bruch2.nenner;
	if (bruch1Ergebenis > bruch2Ergebenis) {
		return true;
	}
	else {
		return false;
	}
}

void cBruch::sortieren(cBruch array[]) {
	for (int n = 8; n > 0; n--) {
		for (int i = 0; i < n; i++) {
			// Elemente vergleichen
			if (vergleichen(array[i],array[i + 1]) == true) {
				// Elemente tauschen
				tauschen(array[i], array[i + 1]);
			}
		}
	}
}

