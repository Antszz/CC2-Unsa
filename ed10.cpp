#include <iostream>
#include <iomanip>
using namespace std;

int len(char c[]){
	int i=0;
	while(c[i]!='\0')
		i++;
	return i;
}

int pote(int x, int y){
	int a=1;
	for(int i=0;i<y;i++){
		a=a*x;
	}
	return a;
}

double conve(char c[], int tam){
	int a=0;
	double num=0;
	for(int i=tam-1;i>=0;i--){
		if(c[i]!=','){
			num=num+(c[i]-'0')*pote(10,a);
			a++;			
		}
		else{
			num=num/pote(10,a);
			a=0;			
		}
	}
	return num;
}

int main(){
	int tam;
	char c[100]={"12345,6700899"};
	tam=len(c);
	cout<<fixed;
	cout<<setprecision(9);
	cout<<conve(c,tam)<<endl;
	return 0;
}