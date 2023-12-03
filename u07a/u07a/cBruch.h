#pragma once
#include <iostream>
using namespace std;
class cBruch
{
private:
	int zaehler;
	int nenner;
	void kuerzen(cBruch bruch);
	int ggT(int a, int b) {
		if (b == 0)
			return a;
		else
			return ggT(b, a % b);
	}
public:
	void ausgabe();
	cBruch addition(cBruch bruch1, cBruch bruch2);
	cBruch subtraktion(cBruch bruch1, cBruch bruch2);
	cBruch multiplikation(cBruch bruch1, cBruch bruch2);
	cBruch division(cBruch bruch1, cBruch bruch2);
	void tauschen(cBruch bruch1, cBruch bruch2);
	void sortieren(cBruch array[]);
	bool vergleichen(cBruch bruch1, cBruch bruch2);
	cBruch(int zaehler_in = 0, int nenner_in = 0);
};

