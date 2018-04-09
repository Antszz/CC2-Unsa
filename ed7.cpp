#include <iostream>

using namespace std;

int lenP(char *c){
	char *a;
	a=c;
	while(*c!='\0'){
		c++;
	}
	return c-a;
}

int len( char c[]){
    int con=0;
	while(c[con]!='\0'){
		con++;
	}
	return con;
}

void concatenar(char *a,char *b){
	char *d=a;
	a=a+lenP(a);
	while(*b!='\0'){
		*a = *b;
		a++;
		b++;
	}
	a=d;
}

void conca(char a[],char b[]){
    int x=len(a);
    int y=len(b);
    for(int i=0;i<y;i++){
        a[i+x]=b[i];
    }
}

int main(){
	char *a=new char();
	char *b=new char();
	cin>>a;
	cin>>b;
	concatenar(a,b);
	while(*a!='\0'){
		cout<<*a;
		a++;
	}
	cout<<endl;
	char x[]={"mono"};
	char y[]={"plaza"};
	int tx=len(x);
    int ty=len(y);
    int t=tx+ty;
	conca(x,y);
	for(int i=0;i<t;i++){
        cout<<x[i];
    }
    cout<<endl;
	return 0;
}
