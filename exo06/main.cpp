#include <iostream>

using namespace std;
struct eleman{
    float info;
    eleman*Suiv;
};

void supprime(eleman *&l){
    eleman*p;
    p=l;
    while(l!=NULL){
        p=l;
        l=l->Suiv;
        delete(p);
    }
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
    supprime(l);
    p=l;
    while(p!=NULL){
        cout <<" "<<p->info;
        p=p->Suiv;
    }
    return 0;
}
