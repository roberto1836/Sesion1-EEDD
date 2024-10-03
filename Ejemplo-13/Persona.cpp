#include "Persona.hpp"

Persona::Persona(int edad)
{
    this->edad = edad;
    this->genero = (rand() % 2);
    this->generarDni();
}

void Persona::mostrar(){
    string sexo = "El hombre ";
    if(genero){
        sexo = "La mujer ";
    }
    cout << "\t" << setw(10) << sexo << " con DNI " << dni << " tiene " << edad << " anyos " << endl;
}

void Persona::generarDni()
{
    char letras[] ="TRWAGMYFPDXBNJZSQVHLCKE";
    int numDNI = 0, aux = 1E7;
    for(int i = 0; i < 8; i++){
        int num = rand() % 10;
        this->dni[i] = '0' + num;
        numDNI = numDNI + num * aux;
        aux /= 10;
    }
    this->dni[8] = letras[numDNI % 23];
    this->dni[9] = '\0';
    
}

int Persona::getEdad()
{
    return this->edad;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

bool Persona::esMujer()
{
    return this->genero;
}
