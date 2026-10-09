#include <iostream>
using namespace std;
int main(){
    int n, suma = 0;
    cout<<"Ingrese un número: "; cin>>n;
    int aux = n;
    for (int i = 2; i <= n; i ++){
        if(aux%i == 0){suma = suma + aux/i;}
        }
    if (suma==n){cout<<n<<" es un número perfecto.";}
    else {cout<<n<<" no es un número perfecto.";}
}