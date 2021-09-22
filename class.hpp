#ifndef DEFF_PERSONNAGE
#define DEFF_PERSONNAGE
#include <string>
#include<iostream>
#include"arme.hpp"
class Personnage
{
private :
    int m_vie;
    int m_mana;
    Arme m_arme;
public :
    Personnage();
    Personnage(std::string nomArme, int degatArme); //constructeur pour init les attributs!
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;
};




#endif