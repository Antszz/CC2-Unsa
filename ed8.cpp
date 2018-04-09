#include <iostream>

using namespace std;

void swaP(char *a,int i,int j){
	char *d=a;
	char *b;
	char *t=new char();
	for(int h=0;h<i;h++){
		a++;
	}
	b=a;
	for(int h=0;h<j-i;h++){
		a++;
	}
	*t=*b;
	*b=*a;
	*a=*t;
	a=d;
}

void swa(char a[],int i,int j){
	char t=a[i];
	a[i]=a[j];
	a[j]=t;
}

int main(){
	char a[]={"escuela"};
	swa(a,2,6);
	for(int i=0;i<7;i++){
		cout<<a[i];
	}
	cout<<endl;
	int x,y;
	char *b=new char();
	cin>>b;
	cin>>x>>y;
	swaP(b,x,y);
	while(*b!='\0'){
		cout<<*b;
		b++;
	}
	cout<<endl;
	return 0;
}