#include"etudiant.hpp"
Etudiant::Etudiant()
{
    nom="xx";
    adress="xx";
    date_n="xx-xx-xxxx";
    classe="xx";
    CIN=0;
}
Etudiant::Etudiant(string m_nom, string m_adress, string m_dateN, string m_classe, int m_CIN)
{
    this->nom=m_nom;
    this->adress=m_adress;
    this->date_n=m_dateN;
    this->classe=m_classe;
    this->CIN=m_CIN;
}

void Etudiant::afficher()
{
    cout<<"info etudiant : "<<endl<<"nom : "<<nom<<endl<<"adresse "<<adress<<endl<<"date de naissance : "<<date_n<<endl<<"CIN : "<<CIN<<endl<<"classe : "<<classe<<endl;
}

Etudiant::~Etudiant()
{
}