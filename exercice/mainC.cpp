#include"class.hpp"
#include"arme.hpp"
using namespace std;

int main()
{

    Personnage king("king sword with ice fire",100), knight("fire sword", 15);

     knight.boirePotionDeVie(755);
    king.attaquer(knight);
    king.boirePotionDeVie(1000);
    king.attaquer(knight);
    knight.attaquer(king);
    knight.changerArme("axes de roi d'ecchue mortelle ",750);
    knight.attaquer(king);

    //temps mort ! fight analyse

    cout<<"king"<<endl;
    king.afficherEtat();
    cout<<endl<<"khnight"<<endl;
    knight.afficherEtat();

    return 0;
}