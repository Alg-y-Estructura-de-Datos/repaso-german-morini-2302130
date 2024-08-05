#include <iostream>

using namespace std;

void marcarAsiento(bool &a) {
    a = true;
}

void mostrar_asientos(bool asientos[10]) {
    for (int i = 0; i < 10; i++) {
        asientos[i] ? cout << "X " : cout << "- ";
    }
    cout << endl;
}

int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Uso: " << argv[0] << " FILA" << endl;
        cout << "Debés indicar la fila del asiento a reservar!" << endl;
        return 1;
    }

    int fila, col;
    bool asientos[10] = {false};

    fila = atoi(argv[1]);

    cout << "Asientos antes de la reserva:" << endl;
    mostrar_asientos(asientos);

    marcarAsiento(asientos[fila-1]);

    cout << "Asientos despues de la reserva:" << endl;
    mostrar_asientos(asientos);
    
    return 0;
}
