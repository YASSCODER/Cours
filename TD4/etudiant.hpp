#ifndef DEF_ETUDIANT
#define DEF_ETUDIANT
#include<string>
#include<iostream>
using namespace std;

class Etudiant
{
protected :

private:
    string nom;
    string adress;
    string classe;
    string date_n;
    int CIN;
public:
//getters :
string getNom(){return nom;}
string getAdress(){return adress;}
string getClasse(){return classe;}
string getDate_n(){return date_n;}
int getCin(){return CIN;}
//setters :
void setNom(string val){nom=val;}
void setAdress(string val){adress=val;}
void setClasse(string val){classe=val;}
void setDate_n(string val){date_n=val;}
void setCin(int val){CIN=val;}
//Méthodes :
void afficher();
//constructeurs :
    Etudiant();
    Etudiant(string, string, string, string, int);
    ~Etudiant();
};



#endif