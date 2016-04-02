
    #include <iostream>
    #include <string>
    #include <climits>
    #include <cstdlib>
    using namespace std;
    inline int modulo (int m, int n)
    {
        return m >= 0 ? m % n : ( n - abs ( m % n ) ) % n;
    }
    int main()
    {
        bool crypter;
        cout << "Taper C si vous voulez crypter et D si vous voulez decrypter" << endl;
        char c;
        cin >> c;
        cin.ignore(INT_MAX, '\n'); // Clean up cin
        switch (c) {
        case 'C':
        case 'c':
            crypter = true;
            break;
        case 'D':
        case 'd':
            crypter = false;
            break;
        default:
            cout << "Entree invalide, fin du programme";
            return (-1);
            break;
        }
        string message;
        cout << "Donnez le message a " << (crypter?"crypter":"decrypter" ) << ">";
        getline(cin, message);
        int cle;
        cout << "Donnez la cle numerique de " << (crypter?"cryptage":"decryptage" ) << ">";
        if (!(cin >> cle)) {
            cout << "Cle invalide, fin du programme";
            return (-1);
        }
        for (string::iterator it = message.begin(); it < message.end(); ++it) {
            if (isupper(*it)) {
                if (crypter)
                    *it = 'A' + modulo(*it - 'A' + cle, 26);
                else
                    *it = 'A' + modulo(*it - 'A' - cle, 26);
            }
            else if (islower(*it)) {
                if (crypter)
                    *it = 'a' + modulo(*it - 'a' + cle, 26);
                else
                    *it = 'a' + modulo(*it - 'a' - cle, 26);
            }
        }
        cout << "Le message " << (crypter?"crypte":"decrypte" ) << " est :"  << message << endl;
        return 0;
    }
