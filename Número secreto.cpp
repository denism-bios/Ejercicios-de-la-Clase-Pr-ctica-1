#include <iostream>
using namespace std;

int main() {
    const int NUMERO_SECRETO = 60;
    int intento;
    int cantidad_intentos = 0;
    do {
        cout << "Intento: ";
        cin >> intento;
        cantidad_intentos++;

        if (intento < NUMERO_SECRETO) {
            cout << "Mayor" << endl;
        } else if (intento > NUMERO_SECRETO) {
            cout << "Menor" << endl;
        }
    } while (intento != NUMERO_SECRETO);

    cout << "¡Correcto! Lo lograste en " << cantidad_intentos << " intentos." << endl;

    return 0;
}