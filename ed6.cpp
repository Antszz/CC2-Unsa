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

void rempla(char *a,char *b){
	char *d=a;
	while(*b!='\0'){
		*a = *b;
		a++;
		b++;
	}
	a=d;
}

int main(){
	char *a=new char();
	char *b=new char();
	cin>>a;
	cin>>b;
	rempla(a,b);
	for(int i=0;i<lenP(b);i++){
		cout<<*a;
		a++;
	}
	cout<<endl;
	return 0;
}