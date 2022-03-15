#pragma once
#include "compteEpargne.h"
#include "comptePayant.h"
class CompteEpargnePayant :public compteEpargne,public comptePayant
{public:
	CompteEpargnePayant(MAD* solde, client* prop, MAD* solde2,client*prop2, MAD* solde3, client* prop3);
	 void retirer(MAD* d1) override;
     void ajouter(MAD* d1) override;
	 void transferer(compte& c2, MAD* montant) override;
	 void consulter() override;
};

