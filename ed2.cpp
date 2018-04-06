#include <iostream>

using namespace std;

int iter(int a[],int x){
    int r=0;
    for(int i=0;i<x;i++){
        r=r+a[i];
    }
    return r;
}

int recu(int a[],int x,int c){
    if(c<x){
        return a[c]+recu(a,x,c+1);
    }
    else return 0;
}

int main()
{
    int x,y,ra,rb;
    cin>>x;
    int a[x];
    int b[x];
    for(int i=0;i<x;i++){
        cin>>y;
        a[i]=y;
        b[i]=y;
    }
    ra=recu(a,x,0);
    rb=iter(b,x);
    cout<<ra<<endl;
    cout<<rb<<endl;
    return 0;
}
