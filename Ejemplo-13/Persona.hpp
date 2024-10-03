#include <iostream>
#include <iomanip>

using namespace std;
class Persona
{
    public:
      Persona(int edad);
      ~Persona();
      int getEdad();
      bool esMujer();
      void setEdad(int edad);
      void mostrar();
    private:
        bool genero;
        int edad;
        char dni[10];
        void generarDni();
};