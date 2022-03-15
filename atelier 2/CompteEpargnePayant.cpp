#include "CompteEpargnePayant.h"
#include<iostream>
using namespace std;
 CompteEpargnePayant::CompteEpargnePayant(MAD* solde, client* prop, MAD* solde2, client* prop2, MAD* solde3, client* prop3)
	:compteEpargne(solde,prop),comptePayant(solde2,prop2),compte(solde3,prop3)
{
}

void CompteEpargnePayant::retirer(MAD* d1)
{
	this->comptePayant::retirer(d1);
	cout << "ceci est retirer du CompteEpargnePayant" << endl;
}

void CompteEpargnePayant::ajouter(MAD* d1)
{
	this->comptePayant::ajouter(d1);
	cout << "ceci est ajouter du CompteEpargnePayant" << endl;
}

void CompteEpargnePayant::transferer(compte& c2, MAD* montant)
{
	this->comptePayant::transferer(c2, montant);
	cout << "ceci est transferer du CompteEpargnePayant" << endl;
}

void CompteEpargnePayant::consulter()
{
	this->comptePayant::consulter();
	cout << "ceci est consulter du CompteEpargnePayant" << endl;
}
