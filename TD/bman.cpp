#include"banq.hpp"

int main()
{

Compte C1,C2;

    C1.saisie();
    C2.saisie();
//creation
    cout<<"Compte C1: "<<C1.getNumCompte()<<" de "<<C1.getNomProp()<<" contenant "<<C1.getSolde()<<" dinars"<<endl;
    cout<<"Compte C2: "<<C2.getNumCompte()<<" de "<<C2.getNomProp()<<" contenant "<<C2.getSolde()<<" dinars"<<endl;

if(C1.retirerArgent(400))
        cout<<"Retrait avec succès!! et nouveau solde: "<<C1.getSolde()<<endl;
    else
        cout<<"Solde insuffisant!!"<<endl;
    C1.deposerArgent(300);
    cout<<"nouveau solde: "<<C1.getSolde()<<endl;
    C1.consulterSolde();
    float val;
    cout<<"donner le montant à transferer: "<<endl;
    cin>>val;

    C1.transfererArgent(200,C2);
    cout<<"pour C1"<<endl; C1.consulterSolde();
    cout<<"pour C2"<<endl; C2.consulterSolde();
    return 0;
}