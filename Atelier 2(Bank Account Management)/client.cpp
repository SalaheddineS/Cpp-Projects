#include "client.h"
#include"compte.h"
int client::cpt = 0;
client::client()
{
}

client::client(string nom, string prenom)
{
	client::cpt++;
	this->matricule = client::cpt;
	this->nom = nom;
	this->prenom = prenom;
	this->liste = vector<compte*>();
}

client::~client()
{
	this->liste.clear();
}

void client::addClient(compte* c)
{
	this->liste.push_back(c);
}
