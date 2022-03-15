#include "operation.h"
int operation::cpt = 0;
operation::operation()
{
}

operation::operation(MAD* montant, string libele)
{
	operation::cpt++;
	this->num = cpt;
	this->libele = libele;
}
