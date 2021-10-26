#include"perso.hpp"
//methode
void Perso::recevoirDammage(int nbDammage)
{
    m_HP-=nbDammage;
    if(m_HP<0)
        m_HP=0;
}

void Perso::attack(Perso& cc)
{
    cc.recevoirDammage(m_technique.getDammage());
}

void Perso::changeTechnique(string newTech, int newDamm)
{
    m_technique.changer(newTech,newDamm);
}

bool Perso::alive()
{
    if(m_HP>0)
        return true;
    else
        return false;
        //remplacé if & else avec (return m_hp > 0) 
        //"return true if m_hp > 0"
}

void Perso::updates()
{
    cout<<"HP : "<<m_HP<<endl;
    cout<<"mana : "<<m_mana<<endl;
    m_technique.afficher();
}

//constructeurs
Perso::Perso()
{
    m_HP=200;
    m_mana=310;
    m_lvl=1;
    m_name="hunter";
}

Perso::Perso(string technique, int dammage) : m_HP(200),m_mana(310),m_lvl(1),m_technique(technique,dammage)
{ 
}
Perso::Perso(Perso const& autre)
{
    m_HP=autre.m_HP;
    m_mana=autre.m_mana;
    m_lvl=autre.m_lvl;
    m_technique=autre.m_technique;
}
Perso::~Perso()
{
}