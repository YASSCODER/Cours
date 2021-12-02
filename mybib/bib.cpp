#include"bib.hpp"
using namespace std;
//constructor&destructor part
 Bib::Bib(/* args */)
{
    vector<int>::iterator it;
    for(it=x.begin();it!=x.end();++it)
    {
        (*it)=0;
    }
}
Bib::Bib(int x)
{
    vector<int>::iterator it;
    for (it = this->x.begin(); it != this->x.end(); ++it)
    {
        (*it)=x;
    }
}
 Bib::~Bib()
{
}

//method part :

void Bib::ajouter()
{

    vector<int>::iterator it;
    bool test = true;
    int val;
    cout << "donner une valeur ";
    cin >> val;

    for (it = x.begin(); it != x.end(); it++)
    {
        if (val == (*it))
        {
            test = false;
        }
    }
    if (test == true)
    {
        x.push_back(val);
        cout << val << " ajouter avec succe" << endl;
    }
}

    void Bib::afficher()
{
    vector<int>::iterator it;
    cout<<"info : "<<endl;
    cout<<endl;
    for (it = x.begin(); it != x.end(); ++it)
    {
        cout<<(*it)<<endl;
    }
}


vector<int>::iterator Bib::rechercher(int val)
{
    vector<int>::iterator it;
    cout << "donner la valeur a chercher : ";
    cin >> val;
    for (it = x.begin(); it != x.end(); ++it)
    {
        if ((*it) == val)
            return it;
    }
    return x.end();
}


void Bib::supprimer()
{
    int val;
    vector<int>::iterator sup;
    vector<int>::iterator it;

    sup = rechercher(val);

    if (it == sup)
    {
        x.erase(sup);
        cout << "suppression avec succe!" << endl;
    }
    else
        cout << "element non trouver" << endl;
}

/********************vector : methode compteur*******************/

/*******************************suppression avec conteur*******************************************
void Bib::supprimer()
{
    int val,pos;
    pos = rechercher(val);
    if(pos!=-1)
    {
        x.erase(x.begin()+pos);
    }

}*/

/**************************rechercher avec conteur***********************************************
int Bib::rechercher(int val)
{
    int i=-1;
    cout << "donner la valeur a chercher : ";
    cin >> val;
    for (i = 0; i != x.size(); i++)
    {
        if (x[i] == val)
            return i;
    }
    return -1;
}*/

/****************************Ajouter dans un vector avec la methode de compteur********************************************
void Bib::ajouter()
{
    bool test=true;
    int i;
    int val;
    
        cout<<"donner une valeur ";
        cin>>val;
        
            for (i=0;i<x.size();i++)
            {
                if (val == x[i])
                {
                    test=false;   
                }    
            }
        
            if (test==true)
            {
                x.push_back(val);
                cout << val << " ajouter avec succe" << endl;
            }
        
}*/

/*====================================liste=============================*/
/****************************ajouter dans une liste************************************
add an element in a list in my case we need to switch the X type to liste<int> in hpp file
 void Bib::ajouter()
{
    
list<int>::iterator it;
bool test = true;
int val;
cout << "donner une valeur ";
cin >> val;

for (it = x.begin(); it != x.end(); it++)
{
    if (val == (*it))
    {
        test = false;
    }    
        }
        if (test==true)
            {
                x.push_back(val);
                cout << val << " ajouter avec succe" << endl;
            }
}*/
/*******************************Affiche une liste********************************************
void Bib::afficher()
{
    list<int>::iterator it;
    cout<<"info : "<<endl;
    cout<<endl;
    for (it = x.begin(); it != x.end(); ++it)
    {
        cout<<(*it)<<endl;
    }
}*/
/****************************suppression dans une liste*****************************
to delet an element from a list use the methode "chercher()" like i did 
    you need to change the type of SUP to list<you_variable_type> sup and list<you_variable_type>(it) and ofcourse the x need to be a list
void Bib::supprimer()
{
    int val;
   // list<int>::iterator sup;
    list<int>::iterator it;

        it = rechercher(val);
       
            if(it!=x.end())
            {
                x.erase(it);
                cout<<"suppression avec succe!"<<endl;
            }
            else
                cout<<"element non trouver"<<endl;
    
}
*/
/**********************chercher dans une liste*****************
to delet an element from a list
search for element in a list in my case we need to switch the X type to liste<int> in hpp file
list<int>::iterator Bib::rechercher(int val)
{
    list<int>::iterator it;
    cout << "donner la valeur a chercher : ";
    cin >> val;
    for (it = x.begin(); it != x.end(); ++it)
    {
        if ((*it) == val)
            return it;
    }
    return x.end();
}*/