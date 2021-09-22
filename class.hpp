#ifndef CLASS_HPP_INCLUDED
#define CLASS_HPP_INCLUDED
#include <string>
#include<iostream>
class Personnage
{
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatArme;
public :
    Personnage();
    Personnage(std::string nomArme, int degatArme); //constructeur pour init les attributs!
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

};




#endif //CLASS_HPP_INCLUDED