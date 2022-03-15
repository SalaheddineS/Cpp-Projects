#include "comptePayant.h"
#include<iostream>
#include"MAD.h"
using namespace std;
void comptePayant::changerTaux()
{
	cin >> this->value;
}

comptePayant::comptePayant(MAD* solde, client* prop):compte(solde,prop)
{
}

void comptePayant::retirer(MAD* d1)
{
	this->solde->opPayant(this->value);
	compte::retirer(d1);
	
}

void comptePayant::ajouter(MAD* d1)
{
	this->solde->opPayant(this->value);
	compte::ajouter(d1);
}
