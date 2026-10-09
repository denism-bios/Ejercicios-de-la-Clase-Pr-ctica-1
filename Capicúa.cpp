#include <iostream>
using namespace std;

int main() {
    long long n, o;
    cout<<"Ingrese un número natural: ";
    cin >> n;
    o = n;
    long long d = n, r = 0;
    int digito;
    while (n > 0) {
        digito = n % 10;
        r = (r * 10) + digito;
        n = n / 10;
    }
    if (o == r) {
        cout << "Es capicua" << endl;
    } 
    else {
        cout << "No es capicua" << endl;
    }
    return 0;
}