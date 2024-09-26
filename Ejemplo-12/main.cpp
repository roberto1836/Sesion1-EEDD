#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct persona{
    char nombre[30];
    int edad;
    long telefono;
};

void Escribir(persona p){
    cout << p.nombre << " tiene " << p.edad << " anyos y su telefono es " << p.telefono;
    cout << endl;
}

void EscribirPuntero(persona* p){
    cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono;
    cout << endl;
}

persona CrearPersona(char n[30], int e, long t){
    persona aux;
    strcpy(aux.nombre, n);
    aux.edad = e;
    aux.telefono = t;
    return aux;
}

int main(int argc, char **argv)
{
	persona ejemplo;
    ejemplo = CrearPersona((char*)"Jesus", 99, 123456789);
    cout << "Paso por valor" << endl;
    Escribir(ejemplo);
    cout << endl;
    ejemplo = CrearPersona((char*)"Mario",55, 987654321);
    EscribirPuntero(&ejemplo);
    return 0;
}
