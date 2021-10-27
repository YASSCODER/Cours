#include"etudiant.hpp"
#include"ecole.hpp"
#include<vector>

int main()
{
    Ecole E;
    int X;
   do
   {
       cout<<"1.ajouter un etudiant "<<endl;
       cout<<"2.afficher les etudiant"<<endl;
       cout<<"0.fermer l'application"<<endl;
       cout<<"ton choix : ";
       cin>>X;
       fflush(stdin);
       switch (X)
       {
       case 1:
            E.ajouter();
           break;
       case 2:
            E.afficher();
            break;
       }

   } while (X!=0);
   

    return 0;
}