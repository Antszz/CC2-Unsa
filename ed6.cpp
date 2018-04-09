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

void remplaP(char *a,char *b){
	char *d=a;
	while(*b!='\0'){
		*a = *b;
		a++;
		b++;
	}
	a=d;
}

void rempla(char x[], char y[]){
	int t=len(y);
	for(int i=0;i<t;i++){
		x[i]=y[i];
	}
}

int main(){
	char *a=new char();
	char *b=new char();
	cin>>a;
	cin>>b;
	remplaP(a,b);
	for(int i=0;i<lenP(b);i++){
		cout<<*a;
		a++;
	}
	cout<<endl;
	char x[]={"mono"};
	char y[]={"plaza"};
	rempla(x,y);
	for(int i=0;i<len(y);i++){
		cout<<x[i];
	}
	cout<<endl;
	return 0;
}
