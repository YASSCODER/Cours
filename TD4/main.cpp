#include"etudiant.hpp"
#include"ecole.hpp"
#include<vector>

int main()
{
    Ecole E;
    int X;
   do
   {
       cout<<"0.fermer l'application"<<endl;
       cout<<"1.ajouter un etudiant "<<endl;
       cout<<"2.afficher les etudiants"<<endl;
       cout<<"3.supprimer un etudiant"<<endl;
       cout<<"4.afficher un classe"<<endl;
       
       cout<<"ton choix : ";
       cin>>X;
       cout<<endl;
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
            E.supprimmer();
        case 4:
            E.afficher_classe();
            break;
        default :
            cout<<"option : 0 -> 5"<<endl;
            break;
       }

   } while (X!=0);
   

    return 0;
}