#include <iostream>

using namespace std;
struct eleman{
    float info;
    eleman*Suiv;
};

float Lpremier(eleman *l){
    return l->info;
}
float Ltroisieme(eleman *l){
    l=l->Suiv->Suiv;
    return l->info;
}
float Ldernier(eleman *l){
    while(l->Suiv!=NULL){
        l=l->Suiv;
    }
    return l->info;
}

float LavDdernier(eleman *l){
    while(l->Suiv->Suiv!=NULL){
        l=l->Suiv;
    }
    return l->info;
}

float Lsomme(eleman *l){
    while(l->Suiv->Suiv->Suiv!=NULL){
        l=l->Suiv;
    }
    return l->info+l->Suiv->info+l->Suiv->Suiv->info;
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
    cout << "la valeur du premier élément = " << Lpremier(l)<< endl;
    cout << "la valeur de l’élément numéro 3 = " << Ltroisieme(l)<< endl;
    cout << "la valeur du dernier élément = " << Ldernier(l)<< endl;
    cout << "la valeur de l’avant dernier élément = " << LavDdernier(l)<< endl;
    cout << "la somme des trois derniers éléments = " << Lsomme(l)<< endl;
    return 0;
}
