#include<iostream>
using namespace std;

class rec
{
    public:
    int largeur, hauteur;
    int surface()
    {
        return hauteur*largeur;    
    }
};
int main()
{
    rec rect1;
    int s;
    cout<<"donne l'argeur :"<<endl;
    cin>>rect1.hauteur;
    cout<<"donner l'hauteur: "<<endl;
    cin>>rect1.largeur;

    s=rect1.surface();

    cout<<"la surface du rectangle : "<<s<<endl;

    return 0;
}

