#include <iostream>

using namespace std;
struct elemen{
  int info;
  elemen *Suiv;
};
void Création(elemen *&L){
    elemen *P,*P_av;
    int x,D;
    do{
    cout<<"fales entere SVP la tialle de la liste a creer \n";
    cin >> D;
    }while(D<0);
    P=NULL;
    cout<<"fales entere SVP les X value \n";
    int fact(int x);
    for (int i=1;i<=D;i++){
        P_av=new(elemen);
        cin>>x;
        P_av->info=fact(x)+x*2;
        P_av->Suiv=P;
        P=P_av;
    }
    L=P;
}
int fact(int N){
    int fac=1;
    for (int i=1;i<=N;i++)
        fac*=i;
    return fac;
}
int posistion(elemen *l,int N,int &co){
    if(N==co)
        return l->info;
    else{
    co++;
        return posistion(l->Suiv,N,co);
    }
}

int main()
{
    elemen *l;
    int co=0;
    Création(l);
    for(int i=0;i<4;i++){
        co=0;
        cout<<"la 3eme elemen = "<<posistion(l,i,co)<<endl;}
    return 0;
}
