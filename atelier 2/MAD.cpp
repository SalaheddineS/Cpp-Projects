#include "MAD.h"
#include<iostream>
using namespace std;
MAD::MAD()
{
}

MAD::MAD(double montant)
{
	this->montant = montant;
}

void MAD::ajouter(MAD* m1)
{
	this->montant = this->montant + m1->montant;
}

void MAD::retirer(MAD* m1)
{
	this->montant = this->montant - m1->montant;
}

void MAD::afficher()
{
	cout << "le montant est " << this->montant << endl;
}

bool MAD::operator>=(MAD& m1)
{
	return this->montant>=m1.montant;
}

void MAD::opPayant(int value)
{
	this->montant = this->montant - (this->montant * (value / 100));
}


