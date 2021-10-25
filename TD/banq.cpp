#include"banq.hpp"
void Compte::saisie()
{
    cout<<"donner le num de compte : ";
    cin>>num_C;
    cout<<"donner le nom du proprietere : ";
    cin>>nom_C;
    cout<<"donner le solde : ";
    cin>>Solde;
}
 bool Compte::retirerArgent(float montant_R)
 {
     if(Solde>=montant_R)
     {
         Solde-=montant_R;
         cout<<"operation effectue avec succee !"<<endl;
         return true;
     }
     else
     {
         cout<<"solde insufisant !"<<endl;
        return false;
     }
 }
 void Compte::deposerArgent(float sA)
 {
     Solde+=sA;
     cout<<"operation effectue avec succee !"<<endl;
 }
 void Compte::consulterSolde() const
 {
     cout<<"vous avez comme solde : "<<Solde<<"Dt"<<endl;
 }
 void Compte::transfererArgent(float ST, Compte& cc)
 {
     if(retirerArgent(ST))
     {
         cc.deposerArgent(ST);
         cout<<"operation effectue avec succee !"<<endl;
     }
     else
        cout<<"solde insufisant !"<<endl;
 }