#pragma once
#include<iostream>
#include<vector>
class compte;
using namespace std;
class client
{private:
	string nom;
	string prenom;
	static int cpt;
	int matricule;
	vector<compte*>liste;
public:
	client();
	client(string nom, string prenom);
	~client();
	void addClient(compte*c);
};

