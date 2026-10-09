#include <iostream>
using namespace std;
int main (){
    long long n;
    int resto = 0, pasos = 0;
    cout<<"Digite un número: "; cin>>n;
    while (n > 1){
        pasos ++;
        resto = n%2;
    //si es par
    if (resto == 0){
       n = n/2;}
    //si es impar
    else {
        n = 3*n + 1;}
    }
    cout<<"Toma "<<pasos<<" pasos llegar hasta 1";
}