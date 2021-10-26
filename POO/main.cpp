#include"perso.hpp"

int main()
{
    Perso P1,P2,P3(P1);
//état :
    P1.updates();
    P2.updates();
    P3.updates();
//action :
    cout<<"round 1 :"<<endl;
    P1.attack(P2);
    P2.attack(P1);
    P3.attack(P2);
//état :
    P1.updates();
    P2.updates();
    P3.updates();
//action :
cout<<"round 2 :"<<endl;
    P1.changeTechnique("boule de feu",76);
    P3.changeTechnique("coupe gorge",80);
    cout<<"change technique !"<<endl;
    P1.attack(P2);
    P2.attack(P1);
    P3.attack(P2);
    P2.attack(P3);
    P2.attack(P3);
    P2.attack(P3);
//état :
    P1.updates();
    P2.updates();
    P3.updates();

    return 0;
}