#ifndef DEF_BIB
#define DEF_BIB
//includes
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<list>

class Bib
{
private:
    std::vector <int> x;
public:
//getters:
std::vector <int> getX(){return x;}
//string getVariableName(){return variable_name;}
//float getVariableName(){return variable_name;}
//double getVariableName(){return variable_name;}
/*****************************************************/
//setters:
//void setNameVariable(<typeVariable> val){Variable_name=val;} //VariableName is your class attributs
/******************************************************************/
//const&destruc :
    Bib(int); //constructor by default
    Bib(/* args */);
    ~Bib();
/**************************************************/
//methode :
    void ajouter();
    void afficher();
    //int rechercher(int);
    //std::list<int>::iterator rechercher(int);
    std::vector<int>::iterator rechercher(int);
    void supprimer();
};
#endif//DEF_BIB