#pragma once
#include"compte.h"
class compteEpargne :virtual public compte
{private:
	double TauxInt;
public:
	void calculInteret();
	compteEpargne(MAD* solde, client* prop);
	compteEpargne(double TauxInt, MAD* solde, client* prop);
};

