#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[10];
    int i, j;

    cout<<"donner un charactere : "<<endl;
    cin>>str;
    for(j=0;j<2;j++)
        j=j+str[i];
    string code;
    code = to_string(j);
    cout<<"le code ASCII de "<<str<<"est : "<<code<<endl;
    return 0;
}