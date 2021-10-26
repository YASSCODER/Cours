#ifndef DEFF_PERSO
#define DEFF_PERSO
//includes
#include<iostream>
#include<string>
#include"arme.hpp"
using namespace std;

class Perso
{
private:
    int m_HP,m_mana,m_lvl;
    string m_name;
    Arme m_technique;
public:
//Méthode
    void recevoirDammage(int nbDammage);
    void attack(Perso& cc);
    void changeTechnique(string newTech, int newDamm);
    bool alive();
    void updates();
    
//getters
    string getName(){return m_name;}
    int getHp(){return m_HP;}
    int getMana(){return m_mana;}
    int getLvl(){return m_lvl;}
//setters
//constructeurs
    Perso();
    Perso(string technique, int dammage);//paramétre
    Perso(Perso const& autre);
    ~Perso();
};

#endif