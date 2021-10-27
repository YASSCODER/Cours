#include"ecole.hpp"
#include<vector>
void Ecole::ajouter()
{
    string nom,date,adresse,classe;
    int Cin;
    cout<<"donner le nom : "<<endl;
    getline(cin,nom);

    cout<<"donner la date de naissance : "<<endl;
    getline(cin,date);

    cout<<"donner l'adresse : "<<endl;
    getline(cin,adresse);

    cout<<"la classe : "<<endl;
    getline(cin,classe);

    cout<<"donner le numero de CIN :"<<endl;
    cin>>Cin;
    Etudiant ET(nom,date,adresse,classe,Cin);
    E.push_back(ET);
}
void Ecole::afficher()
{
    int i;

    for(i=0;i<E.size();++i)
    {
        E[i].afficher();
        cout<<endl;
    }
    cout<<endl;
}
/*void Ecole::rechercher(int m_CIN)
{
    cout<<"CIN de l'etudiant à chercher : ";
    cin>>m_CIN;
    while()
    
}*/
Ecole::Ecole(/* args */)
{
}

Ecole::~Ecole()
{
}