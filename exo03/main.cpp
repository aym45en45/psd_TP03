#include <iostream>

using namespace std;
struct eleman{
    float info;
    eleman*Suiv;
};

bool Lvide(eleman *l){
    return l==NULL;
}

float Lsomme(eleman *l){
    eleman *p;
    p=l;
    float s=0;
    while(p!=NULL){
        s += p->info;
        p = p->Suiv;
    }
    return s;
}

float LsommeP(eleman *l){
    eleman *p;
    float s=0;
    p=l;
    while(p!=NULL){
        if(p->info > 0)
            s += p->info;
        p = p->Suiv;
    }
    return s;
}

int Longeur(eleman *l){
    eleman *p;
    int co=0;
    p=l;
    while(p!=NULL){
        co++;
        p = p->Suiv;
    }
    return co;
}

int main()
{
    eleman *l,*p;
    float n;
    l=new(eleman);
    l=NULL;
    for(int i=1;i<=5;i++){
        cout <<"pls enter the numbers value of the eleman " << 6-i << " \n";
        cin >> n;
        p=new(eleman);
        p->info=n;
        p->Suiv=l;
        l=p;
    }
    if(Lvide(l))
        cout << "la list est vide \n";
    else{
        cout << "la list est non vide \n";
        cout << "la somme des valeurs de ses éléments on la list = " << Lsomme(l)<< endl;
        cout << "la somme des valeurs positives de ses éléments = " << LsommeP(l)<< endl;
        cout << "le nombre d’éléments de la liste = " << Longeur(l)<< endl;
    }
    return 0;
}
