#include "cBruch.h"

int main() {
	cBruch bruch1(3, 6);
	cBruch bruch2(21, -7);
	cBruch bruch3(8, -10);
	cBruch bruch4(-4, 3);
	cBruch bruch5(-8, 13);
	cBruch bruch6(4, 5);
	cBruch bruch7(21, 37);
	cBruch bruch8;
	cBruch array[] = { bruch1, bruch2, bruch3, bruch4, bruch5, bruch6, bruch7, bruch8 };
	for (int i = 0; i < 8; i++) {
		array[i].ausgabe();
	}
	cBruch ergebnis;
	ergebnis.addition(bruch1, bruch2);
	ergebnis.ausgabe();
	ergebnis.subtraktion(bruch3, bruch4);
	ergebnis.ausgabe();
	ergebnis.multiplikation(bruch5, bruch6);
	ergebnis.ausgabe();
	ergebnis.division(bruch7, bruch8);
	ergebnis.ausgabe();
	array->sortieren(array);
	cout << "sortierte ausgabe: " << endl;
	for (int i = 0; i < 8; i++) {
		array[i].ausgabe();
	}

}