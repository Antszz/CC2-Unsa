#include <iostream>

using namespace std;

int len(char c[]){
	int i=0;
	while(c[i]!='\0')
		i++;
	return i;
}

int lenP(char*c){
	char*a;
	a=c;
	while(*c!='\0'){
		c++;
	}
	return c-a;
}

int main(){
	char c[100]={"Computer Science"};
	char*cad =&c[0];
	cout<<len(c)<<endl;
	cout<<lenP(cad)<<endl;
	return 0;
}