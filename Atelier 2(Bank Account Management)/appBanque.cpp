#include "appBanque.h"

appBanque::appBanque()
{
	this->listeCompte = vector<compte*>();
	this->listeClient = vector<client*>();
}

appBanque::~appBanque()
{
	this->listeCompte.clear();
	this->listeClient.clear();
}

void appBanque::ajouterCompte(compte* c)
{
	this->listeCompte.push_back(c);
}

void appBanque::ajouterClient(client* c)
{
	this->listeClient.push_back(c);
}
