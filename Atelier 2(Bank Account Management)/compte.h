#pragma once
#include <vector>;
class MAD;
class client;
class operation;
class compte
{protected:
	int numcompte;
	static int cpt;
	MAD* solde;
	client* prop;
	std::vector<operation*>op;
public:
	compte();
	compte(MAD* solde, client* prop);
	~compte();
	virtual void retirer(MAD* d1);
	virtual void ajouter(MAD* d1);
	virtual void transferer(compte &c2,MAD* montant);
	virtual void consulter();
	void ajouterOperation(operation* o);

};

