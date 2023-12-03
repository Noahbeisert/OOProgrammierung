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
	cout << "Bruch: " << zaehler << "/" << nenner;
	if (nenner == 0) {
		cout << "Division durch 0 geht nicht" << endl;
		return;
	}
	double ergebnis = (double)zaehler / (double)nenner;
	cout << " = " << ergebnis << endl;
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
	double neuerZaehler = (double)bruch1.zaehler * (double)bruch2.nenner;
	double neuerNenner = (double)bruch1.nenner * (double)bruch2.zaehler;
	
	cBruch ergebnisBruch(neuerZaehler, neuerNenner);
	if (neuerNenner == 0) {
		return ergebnisBruch;
	}
	ergebnisBruch.kuerzen(ergebnisBruch);
	return ergebnisBruch;
}

void cBruch::tauschen(cBruch array[], int ix1, int ix2, int lengtharray) {
	if (ix2 >= lengtharray) {
		return;
	}
	cBruch a = array[ix1];
	cBruch b = array[ix2];
	array[ix1] = b;
	array[ix2] = a;
}

bool cBruch::vergleichen(cBruch bruch1, cBruch bruch2) {
	double bruch1Ergebenis = (double)bruch1.zaehler / (double)bruch1.nenner;
	double bruch2Ergebenis = (double)bruch2.zaehler / (double)bruch2.nenner;
	if (bruch1Ergebenis > bruch2Ergebenis) {
		return true;
	}
	else {
		return false;
	}
}

void cBruch::sortieren(cBruch array[], int lengtharray) {
	for (int n = 8; n > 0; n--) {
		for (int i = 0; i < n; i++) {
			// Elemente vergleichen
			cBruch b1 = array[i];
			cBruch b2 = array[i + 1];
			if (vergleichen(array[i], array[i + 1]) == true) {
				// Elemente tauschen
				tauschen(array,i,i + 1, lengtharray);
			}
		}
	}
}

