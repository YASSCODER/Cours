#include<iostream>
#include<string>
#include"etudiant.hpp"
int main()
{
    etudiant E1,E2;
    E1.saisie();
    E1.afficher();
    cout<<"la moyenne de E1 : "<<E1.moyenne()<<endl;
    if(E1.admis())
        cout<<"admis !"<<endl;
    else
        cout<<"refuse !"<<endl;
     E2.saisie();
     E2.afficher();
    cout<<"la moyenne de E2 : "<<E2.moyenne()<<endl;
    if(E2.admis())
        cout<<"admis"<<endl;
    else
        cout<<"refuse !"<<endl;
    cout<<"comapraison entre E1 & E2 : "<<E1.exae_quo(E2)<<endl;
    return 0;
}