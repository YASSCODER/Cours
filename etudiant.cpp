#include<iostream>
#include<string>
#include"etudiant.hpp"
using namespace std;

void etudiant::saisie()
{
    int i;

    cout<<"donner le nom de l'etudiant : "<<endl;
    fflush(stdin);
    getline(cin,nom);
    cout<<"donner le prenom de l'etudiant : "<<endl;
    getline(cin,prenom);
    for(i=0;i<10;i++)
    {
        cout<<"donner les note["<<i+1<<"] de l'tudiant : ";
        cin>>tab_note[i];
    }    
}

void etudiant::afficher()
{
    int i;
    cout<<"le nom :"<<nom<<endl;
    cout<<"le prenom : "<<prenom<<endl;
    for(i=0;i<10;i++)
        cout<<"|"<<tab_note[i];
    cout<<endl;
}
float etudiant::moyenne()
{
    float S,moy;
    int i=0;
    for(;i<10;i++)
        S+=tab_note[i];
    moy=S/10;
    return moy;

}

bool etudiant::admis()
{
    if(moyenne()>=10)
        return true;
    else   
        return false;
}

int etudiant::exae_quo(etudiant E)
{
    if(moyenne()>E.moyenne())
        return 1;
    else if(moyenne()<E.moyenne())
        return -1;
    else
        return 0;
}