#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opt;

    while (1==1) {
        cout << "Opciones:" << endl;
        cout << "[1] Sumar enteros" << endl;
        cout << "[2] Calcular area del círculo" << endl;
        cout << "[3] Calcular potencia" << endl;
        cout << "[4] Salir" << endl;
        cout << endl << "$> ";
        cin >> opt;

        switch (opt) {
            case 1:
                int n1, n2;
                cout << "Ingrese entero 1: "; cin >> n1;
                cout << "Ingrese entero 2: "; cin >> n2;

                cout << "Su suma es: " << n1+n2 << endl;
                break;
            case 2:
                int r;
                cout << "Ingrese el radio: "; cin >> r;

                cout << "El área es: " << M_PI*r*r << endl;
                break;
            case 3:
                int n;
                cout << "Ingrese un número: "; cin >> n;

                cout << "La potencia es: " << n*n << endl;
                break;
            case 4:
                return 0;
            default:
                cout << "Solo podés ingresar números entre 1-4" << endl;
        }

        cout << endl;
    }
}