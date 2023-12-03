#pragma once
#include "cStadt.h"
class cEtappe
{
private:
	cStadt startStadt;
	cStadt zielStadt;
	cEtappe* next;
public:
	cEtappe();
	cEtappe(cStadt startStadt);
	cEtappe(cStadt startStadt, cStadt zielStadt, cEtappe* next);
	void etaPlan(cStadt staedte[]);
	cStadt* findeStadt(cStadt staedte[], string name);
};

