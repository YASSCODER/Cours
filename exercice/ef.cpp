#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string const nomFichier("C:/Users/benao/Desktop/test.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)
    {
        monFlux<<"hello world!."<<endl;
        monFlux<<42.147<<endl;
        int age(23);
        monFlux<<"j'ai "<<age<<endl;
    }
    else
        cout<<"ERREUR : impossible d'ouvrire le fichier "<<nomFichier<<endl;
    return 0;

}