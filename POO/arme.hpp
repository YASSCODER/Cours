#ifndef DEF_ARME
#define DEF_ARME
#include<iostream>
#include<string>
using namespace std;

class Arme
{
private:
    string m_nameTech;
    int m_dammage;
public:
//getters
    string getNameTech()const{return m_nameTech;}
    int getDammage()const{return m_dammage;}
//méthode
    void changer(string newTech,int newDamm);
    void afficher()const;
//constructeur
    Arme();
    Arme(string,int);
    ~Arme();
};

#endif