#include <iostream>

using namespace std;

int main()
{

struct identite
{

    int age;
    int anneDeNaissance;
    string nom;
    string prenom;


};

cout << " Bienvenue dans se programme qui va permettre de vous identifier !" << endl;

struct identite personne1;

cout << " Quel est votre prenom ?" << endl;
cin >> personne1.prenom;

cout << " Quel est votre nom ?" << endl;
cin >> personne1.nom;

cout << " Quel est votre âge ? " << endl;
cin >> personne1.age;

cout << " Quel est votre année de naissance " << endl;
cin >> personne1.anneDeNaissance;

cout << endl;

cout << " Vous vous appellez donc " << personne1.prenom << endl;
cout << " Votre nom est " << personne1.nom << endl;
cout << " Votre age est " << personne1.age << " ans" << endl;
cout << " Votre année de naissance est " << personne1.anneDeNaissance << endl;


    return 0;
}
