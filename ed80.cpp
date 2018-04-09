#include <iostream>

using namespace std;

void inveP(char *a){
	char *d=a;
	char *c=a;
	char *x=new char();
	while(*a!='\0'){
		a++;
	}
	a--;
	while(d<=a){
		*x=*a;
		*a=*d;
		*d=*x;
		d++;
		a--;
	}
	a=c;
}

void inve(char a[],int tam){
	char aux;
	int re=tam/2;
	for(int i=0;i<re;i++){
		aux=a[i];
		a[i]=a[tam-i-1];
		a[tam-i-1]=aux;
	}
}

int main(){
	char *a=new char();
	cin>>a;
	inveP(a);
	while(*a!='\0'){
		cout<<*a;
		a++;
	}
	cout<<endl;
	char b[]={"hola"};
	for(int i=0;i<4;i++){
		cout<<b[i];
	}
	cout<<endl;
	inve(b,4);
	for(int i=0;i<4;i++){
		cout<<b[i];
	}
	cout<<endl;
	return 0;
}