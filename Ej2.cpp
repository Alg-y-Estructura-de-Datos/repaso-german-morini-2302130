#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long res = 1;

    for (int i = 2; i <= n; i++) {
        res *= i;
    }

    return res;
}

unsigned long long fact(int n) {
    if (n > 1) return n * fact(n-1);

    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Uso: " << argv[0] << " NUMERO" << endl;
        return 1;
    }

    unsigned long long n = atoll(argv[1]);

    if (n < 0) {
        cout << "Ingrese un número positivo!" << endl;
    }

    // cout << n << "! = " << factorial(n) << endl;   
    cout << n << "! = " << fact(n) << endl;   
}
