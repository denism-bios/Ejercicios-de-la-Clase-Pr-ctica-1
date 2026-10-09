#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese un número: "; cin >> n;
    bool es_primo = true;
    if (n < 2) {
        es_primo = false;
    } else {
        for (int i = 2; i * i <= n && es_primo; i++) {
            if (n % i == 0) {
                es_primo = false;
            }
        }
    }
    if (es_primo) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }

    return 0;
}