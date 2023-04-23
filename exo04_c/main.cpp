#include <iostream>

using namespace std;
struct eleman{
    float info;
    eleman*Suiv;
};

bool Lidentiq(eleman *l,eleman *p){
    while(p!=NULL && l!=NULL){
        if(p->info != l->info)
            return false;
        l = l->Suiv;
        p = p->Suiv;
    }
    if(p!=NULL || l!=NULL)
        return false;
    return true;
}

bool LidentiqR(eleman *l,eleman *p){
    if(l== NULL && p==NULL)
        return true;
    else if(p==NULL || l==NULL)
        return false;
    else{
        if(p->info != l->info)
            return false;
        return LidentiqR(l->Suiv,p->Suiv);
    }
}
int main()
{
    eleman *l,*l2,*p;
    float n;
    l=new(eleman);
    l=NULL;
    for(int i=1;i<=6;i++){
        cout <<"pls enter the number value of the eleman " << 6-i << " en list 1 \n";
        cin >> n;
        p=new(eleman);
        p->info=n;
        p->Suiv=l;
        l=p;
    }
    l2=new(eleman);
    l2=NULL;
    for(int i=1;i<=5;i++){
        cout <<"pls enter the number value of the eleman " << 6-i << " en list 2 \n";
        cin >> n;
        p=new(eleman);
        p->info=n;
        p->Suiv=l2;
        l2=p;
    }

    if(Lidentiq(l,l2))
        cout << "oui les deux listes est identiques \n";
    else
        cout << "no les deux listes pas identiques \n";

    if(LidentiqR(l,l2))
        cout << "oui les deux listes est identiques \n";
    else
        cout << "no les deux listes pas identiques \n";
    return 0;
}
