#ifndef ETUDIANT_HPP_INCLUDED
#define ETUDIANT_HPP_INCLUDED
#include<string>
using namespace std;
class etudiant
{
    std::string nom;
    std::string prenom;
    int tab_note[10]={0};
public:
    void saisie();
    void afficher();
    float moyenne();
    bool admis();
    int exae_quo(etudiant E);
};



#endif //ETUDIANT_HPP_INCLUDED