#include"arme.hpp"

void Arme::afficher() const
{
    cout<<"technique : "<<m_nameTech<<"(dammage : "<<m_dammage<<")"<<endl;
}

void Arme::changer(string nameTech,int dammTech)
{
    m_nameTech=nameTech;
    m_dammage=dammTech;
}

Arme::Arme()
{
    m_nameTech="basic attack";
    m_dammage=25;
}
Arme::Arme(string name,int dammage)
{
  m_nameTech=name;
  m_dammage=dammage;  
}
Arme::~Arme()
{
}