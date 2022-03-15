// atelier 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"compte.h"
#include"compteCourant.h"
#include"compteEpargne.h"
#include"comptePayant.h"
#include"MAD.h"
#include"operation.h"
#include"client.h"
#include"appBanque.h"
#include"CompteEpargnePayant.h"
using namespace std;
int main()
{
    MAD* montant=new MAD(200);
    MAD* montant2 = new MAD(30);
    operation(montant,"vous avez payer 200Dh");
    client* prop=new client("salah","morchid");
    compte* c1 = new compte(montant,prop);
    compteCourant* c2 = new compteCourant(montant2, montant, prop);
    compteEpargne* c3 = new compteEpargne(montant,prop);
    comptePayant* c4 = new comptePayant(montant, prop);
    CompteEpargnePayant* c5 = new CompteEpargnePayant(montant, prop, montant, prop, montant2, prop);
    c5->consulter(); //le pointeur de CompteEpargnePayant qui utilise le constructeur compte 
   
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
