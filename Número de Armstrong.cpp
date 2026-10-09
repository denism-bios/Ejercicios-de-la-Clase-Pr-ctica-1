#include <iostream>
using namespace std;
int main (){
    int n, suma = 0;
    cout<<"Ingrese un número: "; cin>>n;
    int i = n, c = 0;
    while (i > 0){
        c = i%10;
        suma += c*c*c;
        i = i/10;
        }
        if (suma == n){
        cout<<"Es de Armstrong";}
        else {cout<<"No es de Armstrong";}
    }