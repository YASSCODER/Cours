#ifndef DEFF_ARM
#define DEFF_ARM
#include<iostream>
#include<string>
#include"class.hpp"
class Arme
{
private :
    std::string m_nomArme;
    int m_degatArme;
public :
    Arme();
    Arme(std::string nom, int degat);
    int getDegat() const;
    void changer(std::string nom, int degat);
    void afficher() const;
};
#endif