#include <iostream>

using namespace std;

int main()
{

int lettreUtilisateur;
char convertisseur;

    cout << " Veuillez saisir un chiffres crypté " << endl;
     cin >> lettreUtilisateur;

convertisseur = lettreUtilisateur;

if ( lettreUtilisateur>10 and lettreUtilisateur<16)
{

    lettreUtilisateur=lettreUtilisateur+54;

}

if ( lettreUtilisateur>20 and lettreUtilisateur<26)
{

    lettreUtilisateur=lettreUtilisateur+49;

}

if ( lettreUtilisateur>30 and lettreUtilisateur<36)
{

    lettreUtilisateur=lettreUtilisateur+44;

}

if ( lettreUtilisateur>40 and lettreUtilisateur<46)
{

    lettreUtilisateur=lettreUtilisateur+39;

}

if ( lettreUtilisateur>50 and lettreUtilisateur<56)
{

    lettreUtilisateur=lettreUtilisateur+34;

}

else
{

    cout << "Caractère non compatible " << endl;
    return -1;

}

convertisseur = lettreUtilisateur;


cout << " Votre chiffre décryptée est: " << convertisseur << endl;

    return 0;
}
