#pragma once
class MAD
{private:
	double montant;
public:
	MAD();
	MAD(double montant);
	void ajouter(MAD* m1);
	void retirer(MAD* m2);
	void afficher();
	bool operator>=(MAD& m1);
	void opPayant(int value);
};

