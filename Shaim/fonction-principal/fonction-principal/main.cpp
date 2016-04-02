#include <iostream>

using namespace std;

int main()
{
int choixUtilisateur;
    cout << "Bonjour qu'es ce que vous voulez faire ?" << endl;
    cout << endl;
    cout << "   1-Crypter (taper1)" << endl;
    cout << "   2-Décryptze (taper2)" << endl;
    cin >> choixUtilisateur;

if (choixUtilisateur==1)
{

    cout << " Vous avez saisie un bon chiffre" << endl;

}

else if (choixUtilisateur==2)
{

    cout << " Vous avez saisie un bon chiffre " << endl;

}

else
{

    cout << "Veillez saisir un bon chiffre svp !" << endl;

    return -1;
}
    return 0;
}
