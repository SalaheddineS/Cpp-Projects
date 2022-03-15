#pragma once
#include"compte.h"
class comptePayant:virtual public compte
{
private:
  int value=5;
  void changerTaux();
public:
	comptePayant(MAD* solde, client* prop);
	virtual void retirer(MAD* d1) override;
	virtual void ajouter(MAD* d1) override;
};

