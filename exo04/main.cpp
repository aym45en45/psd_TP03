#include <iostream>

using namespace std;
struct eleman{
    int info;
    eleman*Suiv;
};

int Longeur(eleman *l){
    if(l==NULL)
        return 0;
    else
        return Longeur(l->Suiv)+1;
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
    cout << "le nombre d’éléments de la liste = " << Longeur(l)<< endl;
    return 0;
}
