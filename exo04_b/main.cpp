#include <iostream>

using namespace std;
struct eleman{
    char info;
    eleman*Suiv;
};

bool Lverif(eleman *l,char c){
    eleman *p;
    p=l;
    while(p!=NULL){
        if(p->info == c)
            return true;
        p = p->Suiv;
    }
    return false;
}

bool LverifR(eleman *l,char c){
    if(l== NULL)
        return false;
    else{
        if(l->info == c)
            return true;
        return LverifR(l->Suiv,c);
    }
}
int main()
{
    eleman *l,*p;
    char c;
    l=new(eleman);
    l=NULL;
    for(int i=1;i<=5;i++){
        cout <<"pls enter the char value of the eleman " << 6-i << " \n";
        cin >> c;
        p=new(eleman);
        p->info=c;
        p->Suiv=l;
        l=p;
    }
    cout <<"pls enter the char value to vérifie\n";
    cin >> c;

    if(Lverif(l,c))
        cout << "la liste de caractères oui contient la caractère donné \n";
    else
        cout << "la liste de caractères pas contient la caractère donné \n";

    if(LverifR(l,c))
        cout << "la liste de caractères oui contient la caractère donné \n";
    else
        cout << "la liste de caractères pas contient la caractère donné \n";
    return 0;
}
