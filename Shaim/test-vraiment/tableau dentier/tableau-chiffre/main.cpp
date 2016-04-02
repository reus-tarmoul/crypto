#include <iostream>

using namespace std;

int main()
{

string nombre;
int nombre2;
int dizaine;
char tableauEntier[10];
    cout << "Veuillez mettre votre message crypter s.v.p !" << endl;
    cin >> tableauEntier;
int i(0);

int calcul(0);



for (i=0;i<11;i=i+2)
{
    if ( (tableauEntier[i]-48)*10==10)
    {

        nombre=(tableauEntier[i]-48)+(tableauEntier[i+1]-48)+63;
        nombre2=(tableauEntier[i]-48)+(tableauEntier[i+1]-48)+9;

    cout << nombre;

    }

    if ( (tableauEntier[i]-48)*10==20)
    {

        nombre=(tableauEntier[i]-48)+(tableauEntier[i+1]-48)+63;

    }

}

    return 0;

}
