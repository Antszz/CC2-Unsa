#include <iostream>
using namespace std;

void val(int x){
	x=x+5;
}

void refe(int &x){
	x=x+5;
}

int main(){
	int x=10;
	int y=10;
	val(x);
	refe(y);
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}
