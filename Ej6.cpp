#include <iostream>
#include <string>
#include <vector>

using namespace std;

void agregarContacto(vector<string> *contactos, string nombre, string telefono) {
    contactos->push_back(nombre+":"+telefono);
}

void mostrarContactos(vector<string> *contactos) {
    for (int i = 0; i < contactos->size(); i++) {
        cout << contactos->at(i) << endl;
    }
}

int main(int argc, char **argv) {
    if (argc != 3) {
        cout << "Uso: " << argv[0] << " NOMBRE TELEFONO" << endl;
        return 1;
    }

    string nom, tel;
    vector<string> *contactos = new vector<string>;

    nom = argv[1];
    tel = argv[2];

    agregarContacto(contactos, nom, tel);
    mostrarContactos(contactos);
}
