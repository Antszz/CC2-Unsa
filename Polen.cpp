#include <iostream>

using namespace std;

int len(char c[]){
    int i=0;
    while(c[i]!='\0')
        i++;
    return i;
}

bool reve(char c[], int tam){
    for(int i=0;i<tam;i++){
        if(c[i]!=c[tam-1-i])
            return false;
    }
    return true;
}

int main()
{
    int tam;
    char c[100]={"121"};
    tam=len(c);
    if(reve(c,tam)) cout<<"Es palindrome"<<endl;
    else cout<<"No Palindrome"<<endl;
    return 0;
}
