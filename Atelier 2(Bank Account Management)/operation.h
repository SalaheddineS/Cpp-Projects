#pragma once
#include"MAD.h"
#include"iostream"
using namespace std;
class operation
{private:
	int num;
	static int cpt;
	MAD* montant;
	string libele;
public:
	operation();
	operation(MAD* montant,string libele);

};

