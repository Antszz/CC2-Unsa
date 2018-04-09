#include <iostream>

using namespace std;

void insertion(int a[],int tam){
	int i,j,temp;
	for(i=1;i<tam;i++){
		j=i;
		while(j>0 && a[j-1]>a[j]){
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
}

int divi(int a[], int i, int j){
    int l,r,p,aux;
    p=a[i];
    l=i;
    r=j;
    while(l<r) {
        while(a[r]>p){
            r--;
        }
        while((l<r)&&(a[l]<=p)){
            l++;
        }
        if(l<r){
            aux=a[l];
            a[l]=a[r];
            a[r]=aux;
        }
    }
    aux=a[r];
    a[r]=a[i];
    a[i]=aux;
    return r;
}

void quicksort(int a[], int i, int j){
    int p;
    if (i<j) {
        p=divi(a,i,j);
        quicksort(a,i,p-1);
        quicksort(a,p+1,j);
    }
}

void merge(int a[], int l, int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
        L[i]=a[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=a[m+1+j];
    }

    i=0;
    j=0;
    k=l;
    while((i<n1) && (j<n2)){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

void mostrar(int a[],int tam){
	for(int i=0;i<tam;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int tam=13;
	int a[tam]={13,12,14,11,8,7,6,5,4,3,1,0,10};
	mostrar(a,tam);
	//insertion(a,tam);
	//quicksort(a,0,tam-1);
	mergeSort(a,0,tam-1);
	cout<<endl;
	mostrar(a,tam);
	return 0;
}
