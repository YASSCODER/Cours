#include<iostream>
using namespace std;

void permutation(int& x, int& y);

int main()
{

    int a=0,b=0;

    cout<<"donner une valeur pour a : ";
    cin>>a;
    cout<<"donner une valeur pour b : ";
    cin>>b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    permutation(a,b);
    cout<<"apres permutation !"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}
void permutation(int& x, int& y)
{
    int aux;
    aux=x;
    x=y;
    y=aux;
}