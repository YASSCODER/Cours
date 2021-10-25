#include<iostream>
using namespace std;

void dessinerRectangle(int L, int H);

int main()
{
    int L=0,H=0;

    cout<<"donner largeur de rectangle :"<<endl;
    cin>>L;
    cout<<"donner l'hauteur du rectangle : "<<endl;
    cin>>H;
    dessinerRectangle(L,H);
    return 0;
}

void dessinerRectangle(int L, int H)
{
    int i,j;
    for(i=0;i<H;i++)
    {   
        for(j=0;j<L;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}