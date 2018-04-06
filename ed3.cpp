#include <iostream>

using namespace std;

void insertion(int a[],int tam){
	int i,j,temp;
	for(i=1;i<tam;i++){
		j=i;
		while(j>0 && a[j-1]>arr[j]){
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
}

void quicksort(int )

void mostrar(int a[],int tam){
	for(int i=0;i<tam;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[9]={5,9,10,1,4,6,0,7,3};
	mostrar(a,9);
	insertion(a,9);
	cout<<endl;
	mostrar(a,9);
	return 0;


}