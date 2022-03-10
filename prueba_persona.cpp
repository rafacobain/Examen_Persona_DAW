/* Vamos a crear una clase Persona, para que se evalúen todos los puntos es necesario que se compruebe su funcionamiento en la función MAIN:

GUARDA TODO EL PROCESO EN GITHUB

- Cuenta con tres atributos: Nombre, DNI y edad.
- Para crear un objeto de la clase Persona necesitamos cómo mínimo el nombre y el DNI. Si no se especifica la edad, se guarda por defecto 18 años.
- Crea los gets y los sets para poder acceder a los datos.
- Crea un método imprimir que imprima por pantalla la frase "Me llamo *nombre*, tengo *años* años y mi DNI es *dni*".
- Crea un método que devuelva si la Persona es mayor de edad o no.

- Modifica la clase CREANDO UNA NUEVA RAMA EN GIT para que tenga además un atributo vip que indique si una persona tiene o no beneficios especiales.
[Si no quieres crear una rama de git es recomendable que gestiones las versiones, al menos, de forma manual]
- Cuándo se registre la Persona debe introducir un vector de tres números, si la suma de los tres números es múltiplo de 11 automáticamente esa persona pasará a ser vip. Si alguno de esos números es múltiplo de 13 se le da la oportunidad de añadir dos números más.
- Modifica y añade los métodos necesarios para que se aprecie el cambio en la clase.
- El ser vip es cuestión de suerte (o de conocer el truco) por eso nunca nadie podrá cambiar el valor de la variable vip.

UNE LA RAMA DE GIT A LA RAMA PRINCIPAL. */

#include <iostream>
#include <vector>
using namespace std;

class Persona{
  private:
    // Variables
    string nombre;
    string dni;
    int edad;

    // Funciones


  public:
    Persona(string nombre, string dni, int edad=18){
      this->nombre = nombre;
      this->dni = dni;
      this->edad = edad;
    }

    string getNombre(){
      return this->nombre;
    }

    string getDni(){
      return this->dni;
    }

    int getEdad(){
      return this->edad;
    }

    void setNombre(string x){
      this->nombre = x;
    }

    void setDni(string x){
      this->dni = x;
    }

    void setEdad(int x){
      if (x > 0) this->edad = x;
    }

    void imprimir(){
      cout << "Me llamo " << this->nombre << ", tengo " << this->edad << " anios y mi DNI es " << this->dni << endl;
    }

    bool mayorDeEdad(){
      return this->edad >= 18;
    }
};

// -----------------------------------------------------------------------------------------

int main(){
  Persona rafa("Rafa", "7722883S", 21);

  cout << "Creada la persona 'rafa', al imprimir sale: " << endl;
  rafa.imprimir();

  cout << endl;

  cout << "Usamos sets con los valores 'Rafael', '6655443E' y 26" << endl;
  rafa.setNombre("Rafael");
  rafa.setDni("6655443E");
  rafa.setEdad(26);
  cout << "Al imprimir sale: " << endl;
  rafa.imprimir();

  cout << endl;

  cout << "Utilizo los gets para extraer los datos individualmente: " << endl;
  cout << "Nombre: " << rafa.getNombre() << endl;
  cout << "DNI: " << rafa.getDni() << endl;
  cout << "Edad: " << rafa.getEdad() << endl;

  cout << endl;

  cout << "Creado un metodo que nos da un bool 'true (1)' si la persona es mayor de edad, o 'false (0)' si no lo es: " << endl;
  cout << "La persona " << rafa.getNombre() << " es mayor de edad?: " << rafa.mayorDeEdad();

  return 0;
}
