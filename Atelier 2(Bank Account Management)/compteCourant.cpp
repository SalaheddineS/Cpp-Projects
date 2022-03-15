#include "compteCourant.h"

compteCourant::compteCourant(MAD* solde, client* prop) :compte(solde, prop)
{
}

compteCourant::compteCourant(MAD* decouvert, MAD* solde, client* prop):compte(solde, prop)
{
	this->decouvert = decouvert;
}

void compteCourant::retirer(MAD* d1)
{
	if (this->decouvert >= d1) {
		this->compte::retirer(d1);
}
}


