#include"bib.hpp"
using namespace std;
int main()
{
    Bib E;
    int X;
    do
    {
        cout << "0.fermer l'application" << endl;
        cout << "1.ajouter un x " << endl;
        cout << "2.afficher les x" << endl;
        cout << "3.supprimer un element" << endl;
    

        cout << "ton choix : ";
        cin >> X;
        cout << endl;
        fflush(stdin);
        switch (X)
        {
        case 1:
            E.ajouter();
            break;
        case 2:
            E.afficher();
            break;
        case 3:
            E.supprimer();
            break;

        default:
            cout << "option : 0 -> 5" << endl;
            break;
        }

    } while (X != 0);

    return 0;
}
/*        
        case 4:
            E.afficher_classe();
            break;
*/