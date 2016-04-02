#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Bienvenue dans mon programme qui va permettre de crypter celon la methode de polibes  " << endl;

int i=65;  // représentation numérique du nombre
char test=65; // représentation en lettre du nombre
char utilisateur ='P'; // lettre a décrypter
char utilisateur2=80;


cout << utilisateur << endl;
cout << utilisateur2 << endl;

while (test!=utilisateur)
{

    i++;
    test++;

}

if (i>64 and i<70) {

cout << i-54 << endl;

}


if (i>69 and i<75)
{

    cout << i-49 << endl;

}

if (i>74 and i<80)
{

    cout << i-44 << endl;

}

if (i>79 and i<85)
{

    cout << i-39 << endl;

}

if (i>84 and i<90)
{

    cout << i-34 << endl;

}


return 0;
}
