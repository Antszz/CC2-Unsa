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

void *concatenar(char *a,char *b){
	int x=lenP(a);
	int y=lenP(b);
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
    int tam1=len(a);
    int tam2=len(b);
    int tamtot=tam1+tam2;
    char nueva[tamtot];
    for(int i=0;i<tam1;i++){
        nueva[i]=a[i];
    }
    for(int j=0;j<tam2;j++){
        nueva[j+tam1]=b[j];
    }
    for (int i = 0; i < tamtot; i++)
    {
    	cout<<nueva[i];
    }
    cout<<endl;
}



int main(){
	char *a=new char();
	char *b=new char();
	cin>>a;
	cin>>b;
	char one[]={"HOLA"};
	char two[]={"AMIGO"};
	conca(one,two);
	concatenar(a,b);
	while(*a!='\0'){
		cout<<*a;
		a++;
	}
	cout<<endl;
	return 0;
}
