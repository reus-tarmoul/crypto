#include <iostream>
#include <stdio.h>

using namespace std;

char minusculeMajuscule(char x) // fonction qui converti les minuscule en majuscule
{

    x=x-32;

    return x;

}

void cryptage(char x) // Fontion qui permet de faire le cryptage
{


int i=65;  // représentation numérique du nombre
char test=65; // représentation en lettre du nombre
char utilisateur = x; // lettre a décrypter


while (test!=utilisateur)  //
{

    i++;
    test++;
}


if (x == ' ') // si on a un espace on doit donc afficher un espace
{

    cout << " ";

}


if (i>64 and i<70) { // Ses test vous nous permettre de savoir de quelle lettre il sagit et de se qu'il faut faire pour l'afficher de maniere crypté

    cout << (i-54);

}


if (i>69 and i<75)
{

   cout << (i-49);

}

if (i>74 and i<80)
{

    cout << (i-44);

}

if (i>79 and i<85)
{

   cout << (i-39);

}

if (i>84 and i<90)
{

   cout << (i-34);

}



}

int main(void){

cout << "Bienvenue dans mon super programme de cryptage" << endl;

string message;

    cout << "Veuillez saisir le texte a cryter " << endl;
    getline(cin, message); //le message est stocké dans un tableau

int i;

for (i=0;i<50;i++)
{

    if (message[i]>96 and message[i]<123)
    {

        message[i]=minusculeMajuscule(message[i]);

    }


}


for (i=0;i<50;i++)
{

   cryptage(message[i]); // La fonction marche que pour une lettre on le répéte pour chaque valeur du tableau

}



}
