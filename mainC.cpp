#include"class.hpp"

int main()
{

    Personnage king, knight;

    king.attaquer(knight);
    knight.boirePotionDeVie(20);
    king.attaquer(knight);
    knight.attaquer(king);
    knight.changerArme("axes de roi d'ecchue mortelle",35);
    king.attaquer(knight);

    return 0;
}