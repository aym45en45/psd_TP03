#include <iostream>

using namespace std;
struct eleman{
    int info;
    eleman*adr;
};

int main()
{
    //qst1
    eleman *a,*b,*c,*p,*l;
    int n1,n2,n3;
    a=new(eleman);
    a->info=0;
    b=new(eleman);
    b->info=10;
    c=new(eleman);
    c->info=-5;

    //qst2
    l=new(eleman);
    l=a;
    a->adr=b;
    b->adr=c;
    c->adr=NULL;

    //qst3
    cout <<"enter the 3 numbers pls \n";
    cin >> n1>>n2>>n3;

    p=new(eleman);
    p->info=n1;
    p->adr=l;
    l=p;

    p=new(eleman);
    p->info=n2;
    p->adr=NULL;
    c->adr=p;

    p=new(eleman);
    p->info=n3;
    p->adr=b;
    a->adr=p;

    //qst4
    l->adr=p;
    free(a);

    //qst5
    p=l;
    while(p!=NULL){
        cout <<" "<< p->info;
        p=p->adr;
    }
}
