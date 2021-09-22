#include "class.hpp"
#include"arme.hpp"
using namespace std;
Personnage::Personnage()
{
    m_vie=100;
    m_mana=100;
}
Personnage::Personnage(string nomArme, int degatArme): m_vie(100), m_mana(100),m_arme(nomArme,degatArme)
{
    
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
    cible.recevoirDegats(m_arme.getDegat());
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie+=quantitePotion;
    m_mana+=quantitePotion+60;
    if(m_vie>1000)
        m_vie=1000;
    if (m_mana>150)
        m_mana=150;
}
void Personnage::changerArme(string nomNouvelleArme, int degatsNouvellArme)
{
    m_arme.changer(nomNouvelleArme,degatsNouvellArme);
}
bool Personnage::estVivant() const
{
    if(m_vie>1)
    {
         return true;
    }
    else
    {
        return false;
    }   
}
void Personnage::afficherEtat() const 
{
    cout<<"vie : "<<m_vie<<endl;
    cout<<"m_mana : "<<m_mana<<endl;
    m_arme.afficher();
}