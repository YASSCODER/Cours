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
    {return numCompte;}
    string getNomProp()const
    {return nomProp;}
    float getSolde()const
    {return solde;}
 //setters
    void setNumCompte(int val){numCompte=val;}
    void setNomProp(string val){nomProp=val;}
    void setSolde(float val){solde=val;}
 //Méthode
    void saisie();
    bool retirerArgent(float montant_R);
    void deposerArgent(float sA);
    void consulterSolde() const;
    void transfererArgent(float ST, int& );
};

#endif