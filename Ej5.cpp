#include <cstdlib>
#include <iostream>

using namespace std;

class Calculadora {
    private:
        float A, B;
    public:
        Calculadora(float _A, float _B) : A(_A), B(_B) {}

        float sumar() {
            return A+B;
        }

        float restar() {
            return A-B;
        }

        float dividir() {
            if (B == 0) throw 400;

            return A/B;
        }

        float multiplicar() {
            return A*B;
        }
};

int main(int argc, char **argv) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " A B" << endl;
        return 1;
    }

    float A, B;

    A = atof(argv[1]);
    B = atof(argv[2]);

    Calculadora calc(A, B);

    cout << calc.sumar() << endl;
    cout << calc.restar() << endl;
    try {
        cout << calc.dividir() << endl;
    } catch (int e) {
        cout << "No se puede dividir por 0!" << endl;
    }
    cout << calc.multiplicar() << endl;
}
