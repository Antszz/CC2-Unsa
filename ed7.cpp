/*#include <iostream>
#include <string.h>
using namespace std;

int tam(string c){
	int con=0;
	while(c[con]!='\0'){
		con++;
	}
	return con;
}

char *concatenar(char *a,char *b){
	int x=tam(a);
	int y=tam(b);
	int c=x+y;
	char *d=new char(c);
	for(int i=0;i<x;i++){
		*(d+i)=*(a+i);
	}
	for(int j=x;j<c;j++){
		*(d+j)=*(b+j-x);
		cout<<*(b+j-x)<<endl;
	}
	return d;
}

int main(){
	char *a=new char();
	char *b=new char();
	cin>>a;
	cin>>b;
	cout<<concatenar(a,b)<<endl;
	return 0;
}*/

#include <iostream>
using namespace std;

int tam(char *c){
	int con=0;
	while(*(c+con)!='\0'){
		con++;
	}
	return con;

}
int tamarr( char c[]){
    int con=0;
	while(c[con]!='\0'){
		con++;
	}
	return con;




}



char *concatenar(char *a,char *b){
	int x=tam(a);
	int y=tam(b);
	int c=x+y;
	char *d=new char(c);
	for(int i=0;i<x;i++){
		*(d+i)=*(a+i);
	}
	for(int j=x;j<c;j++){
		*(d+j)=*(b+(j-x));
	}

	return d;
}

void conca(char a[],char b[]){
    int tam1=tamarr(a);
    int tam2=tamarr(b);
    cout<<tam1<<" "<<tam2<<endl;
    int tamtot=tam1+tam2;
    char nueva[tamtot];
    for(int i=0;i<tam1;i++){
        nueva[i]=a[i];
    }
    for(int j=0;j<tam2;j++){
        nueva[j+tam1]=b[j];


    }
    //cout<<nueva<<endl;
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

	cout<<concatenar(a,b)<<endl;
	return 0;


}