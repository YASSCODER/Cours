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

bool Ecole::rechercher()
{
    int i,m_CIN;
    cout<<"CIN a chercher : ";
    cin>>m_CIN;
    while(i<E.size())
    {
        i++;
    }
    if(E[i].getCin()!=m_CIN)
        {
            return true;
        }
    else
        return false;

}

void Ecole::supprimmer()
{
    
    for(vector <Etudiant>::iterator it=E.begin();it!=E.end();++it)
    {
        if(rechercher()==true)
        {
            E.erase(it);
            cout<<"suppression avec succe !"<<endl;
        }
        else   
        cout<<"element introuvable !"<<endl;
    }
    
}

void Ecole::afficher_classe()
{
    int i;
    string m_classe;
    cout<<"donner la classe a afficher : ";
    cin>>m_classe;
    for(i=0;i<E.size();i++)
    {
        if(E[i].getClasse()==m_classe)
        E[i].afficher();
        cout<<endl;
    }
    cout<<endl;
}
Ecole::Ecole(/* args */)
{
}

Ecole::~Ecole()
{
}