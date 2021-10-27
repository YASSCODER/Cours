#ifndef DEF_ECOLE
#define DEF_ECOLE
#include<iostream>
#include<string>
#include<vector>
#include"etudiant.hpp"
using namespace std;

class Ecole
{
private:
  vector < Etudiant> E;
public:
//getters :
//setters :
//Méthode :
void ajouter();
void afficher();
void rechercher(int m_CIN);
void supprimmer(int m_CIN);
void afficher_classe();
//constructeurs :
    Ecole(/* args */);
    ~Ecole();
};


#endif//ECOLE