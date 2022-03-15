#include "compteEpargne.h"

void compteEpargne::calculInteret()
{
}

compteEpargne::compteEpargne(MAD* solde, client* prop):compte(solde,prop)
{
}

compteEpargne::compteEpargne(double TauxInt, MAD* solde, client* prop) : compte(solde, prop)
{
	this->TauxInt = TauxInt;
}
