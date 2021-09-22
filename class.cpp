#include "class.hpp"
using namespace std;
Personnage::Personnage()
{
    m_vie=100;
    m_mana=100;
    m_nomArme="Long sword";
    m_degatArme=10;
}
Personnage::Personnage(string nomArme, int degatArme)
{
    m_vie=100;
    m_mana=100;
    m_nomArme=nomArme;
    m_degatArme=degatArme;
}
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie-=nbDegats;

    cout<<"vie : "<<m_vie<<endl;
    if(m_vie<0)
    {
        m_vie=0;
    }
}
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatArme);
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie+=quantitePotion;
    m_mana+=quantitePotion+60;
    if(m_vie>100)
        m_vie=100;
    if (m_mana>150)
        m_mana=150;
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvellArme)
{
    m_nomArme=nomNouvelleArme;
    m_degatArme=degatsNouvellArme;
}
bool Personnage::estVivant()
{
    if(m_vie>1)
        return true;
}