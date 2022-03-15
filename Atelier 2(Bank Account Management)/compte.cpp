#include "compte.h"
#include"MAD.h"
#include"operation.h"
#include"client.h"
#include <vector>;
using namespace std;
int compte::cpt = 0;
compte::compte()
{
}

compte::compte(MAD* solde, client* prop)
{
	compte::cpt++;
	this->numcompte = compte::cpt;
	this->solde = solde;
	this->prop = prop;
	this->op = vector<operation*>();
}

compte::~compte()
{
	this->op.clear();
}

void compte::retirer(MAD* d1)
{
	this->solde->retirer(d1);
}

void compte::ajouter(MAD* d1)
{
	this->solde->ajouter(d1);
}

void compte::transferer(compte& c2, MAD* montant)
{
	this->solde->retirer(montant);
	c2.ajouter(montant);
}

void compte::consulter()
{
	this->solde->afficher();
}

void compte::ajouterOperation(operation* o)
{
	this->op.push_back(o);
}
