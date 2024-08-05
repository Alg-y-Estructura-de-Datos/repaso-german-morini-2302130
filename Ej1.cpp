#include <iostream>

using namespace std;

void intercambiarJugos(int &vaso1, int &vaso2) {
    int vaso = vaso1;
    vaso1 = vaso2;
    vaso2 = vaso;
}

int main() {
    int jugo_naranja, jugo_manzana;

    cout << "Ingrese cant. jugo naranja: "; cin >> jugo_naranja;
    cout << "Ingrese cant. jugo manzana: "; cin >> jugo_manzana;

    cout << "INTERCAMBIANDO VASOS..." << endl;
    intercambiarJugos(jugo_manzana, jugo_naranja);

    cout << "jugo naranja: " << jugo_naranja << endl;
    cout << "jugo manzana: " << jugo_manzana << endl;

    return 0;
}
