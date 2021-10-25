#ifndef DEFF_BANQ
#define DEFF_BANQ

#include<iostream>
#include<string> 
using namespace std;

class Compte
{
 private :
 int num_C;
 string nom_C;
 float Solde;

 public :
 //getters
    int getNumCompte()const
    {return num_C;}
    string getNomProp()const
    {return nom_C;}
    float getSolde()const
    {return Solde;}
 //setters
    void setNumCompte(int val){num_C=val;}
    void setNomProp(string val){nom_C=val;}
    void setSolde(float val){Solde=val;}
 //Méthode
    void saisie();
    bool retirerArgent(float montant_R);
    void deposerArgent(float sA);
    void consulterSolde() const;
    void transfererArgent(float ST, Compte& cc );
};

#endif