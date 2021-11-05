#ifndef DEF_BIB
#define DEF_BIB
//includes
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<list>
/*don't forget to change the class name in hpp file and the cpp file
and if you want to use the constructor by default uncomment the constructor
there is two vesion of "void ajouter()" choose the one you want */
/*please don't forget to put your data and change the attributs of the Bib class :) */
class Bib/*Name_class*/
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
    int rechercher(int);
    //std::list<int>::iterator rechercher(int);
    void supprimer();
};
#endif//DEF_BIB