#pragma once
#include"compte.h"
class compteCourant:public compte
{private:
	MAD* decouvert;
public:
	compteCourant(MAD* solde, client* prop);
	compteCourant(MAD* decouvert, MAD* solde, client* prop);
	void retirer(MAD* d1) override;

};

