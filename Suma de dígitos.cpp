#include <iostream>
using namespace std;
int main(){
    long long n;
    int suma = 0, digito = 0;
    cout<<"Ingrese un número natural: "; cin>>n;
    while(n>0){
        digito = n%10;
        suma = suma + digito;
        n = n/10;
        }
        cout<<"La suma de los dígitos del número es: "<<suma;
    }