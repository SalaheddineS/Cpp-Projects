#pragma once
#include<vector>
#include"compte.h"
#include"client.h"
using namespace std;
class appBanque
{private:
	vector<compte*>listeCompte;
	vector<client*>listeClient;
public:
	appBanque();
	~appBanque();
	void ajouterCompte(compte* c);
	void ajouterClient(client* c);
};

