
#include"class.hpp"
#include"arme.hpp"
using namespace std;

Arme::Arme()
{
    m_nomArme="long sword";
    m_degatArme=10;
}
Arme::Arme(string nom, int degat)
{
    m_nomArme=nom;
    m_degatArme=degat;
}
void Arme::changer(string nom, int degat)
{
    m_nomArme=nom;
    m_degatArme=degat;
}
void Arme::afficher() const
{
    cout<<"Arme : "<<m_nomArme<<endl<<"degat : "<<m_degatArme<<endl;
}
int Arme::getDegat() const
{
    return m_degatArme;
}