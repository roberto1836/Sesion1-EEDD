#include <Persona.hpp>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    int n = 10;
    int a[n];
    cout << "Array de edades ordenado: " << endl;
    for (int i = 0; i < n; ++i) {
        a[i] = i + 18; // 18 -> 27
        cout << a[i] << " ";
    }

    cout << endl << endl;
    cout << "Array de edades desordenado: " << endl;
    random_shuffle(a, a + n);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    cout << endl << endl;
    for (int i = 0; i < n; ++i) {
        Persona* p = new Persona(a[i]);
        p->mostrar();
    }

    cout << endl;
    return 0;
}
