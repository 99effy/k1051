/*
* main.cpp
* Resolución de Ejercicio 01 para comisión K1051, AyED 2022.
* Facundo García Pergañeda (177.045-7)
* 28/04/22
*/

#include <iostream>
#include <cassert>
#include <limits>

using namespace std::string_literals;

int main() {
	// Definimos cada variable como una constante para que no varíe su valor
	// mientras corre nuestro programa.
	const bool booleano = true;
	const unsigned int enteroSinSigno = 38292;
	const char caracter = 'J';
	const double decimal = -293.92;
	// El inicializar 'entero' igual a decimal nos dará el valor de decimal
	// redondeado hacia abajo. Es decir, sin su mantisa.
	const int entero = decimal;
	const std::string cadenaDeCaracteres = "Prueba";
	const long numeroLong = 123456789;


	// Simplemente pasamos la variable ya que al tener un valor verdadero
	// y ser constante este no debería variar.
	assert(booleano);

	// Verificamos si la variable es igual o mayor a cero, ya que no puede
	// (o debería, mejor dicho) tener un valor menor a 0.
	assert(enteroSinSigno >= 0);

	// Siendo que los chars tienen un valor númerico entre 0 y 256, podemos 
	// verificar si la variable tiene un valor entre dichos números
	assert(caracter >= 0 && caracter <= 255);
	
	// Asumiendo que decimal tiene una mantisa, de querer restar decimal a entero
	// el valor total debería ser siempre distinto a 0.
	// Este chequeo rinde para ambas variables entero y decimal.
	assert(entero - decimal != 0);

	// Para el string usamos una de las funciones integradas del objeto para
	// comparar su valor con el indicado previamente.
	assert(!cadenaDeCaracteres.compare("Prueba"));
	
	// Como extra, para variar un poco y divertirse, podemos verificar si el 
	// tipo de dato de la variable 'caracter' es un char tomando el valor devuelto 
	// por typeid (un puntero a un const char), casteando su valor como un char, 
	// y compararlo con el valor que debería devolver si el tipo es un char.
	assert((char)*typeid(caracter).name() == 'c');
	
	// Hay que investigar más operaciones, averiguar el rango y máximo de cada tipo 
	// separador de dígitos??? y sumar 10 veces 0.1, además de la memoria que ocup 
	// cada tipo de dato 
	
	// Verificamos que la longitud del string literal (No su tamaño) y el objeto
	// string sean equivalentes.
   	assert("String"s.length() == std::string("String").length());

    	// Verificamos que el valor de enteroSinSigno con un sufijo 'u' tenga el mismo
	// valor que la variable en cuestión
    	assert(38292u == enteroSinSigno);

    	// Verificamos que el valor de numeroLong con el sufijo 'l' sea el mismo que
	// el de la variable.
    	assert(123456789l == numeroLong);

	// Comprobamos que 1000 es mayor a 5 por 10 a la 2
	assert(1000 > 5e2);

	// Concatenamos strings de C++
	assert("Esto es u"s + "na prueba"s == "Esto es una prueba"s);
	
	// Verificamos los límites de un unsigned long long
	assert(std::numeric_limits<unsigned long long>::max() == 18446744073709551615u);
	assert(std::numeric_limits<unsigned long long>::min() == 0);

	// Verificamos el tamaño máximo de un string
	assert("string"s.max_size() == 9223372036854775807);

	// Comparamos el tamaño en memoria de un string de C++ con uno de C
	assert(sizeof "String"s == 32);
	assert(sizeof "String" == 7);
}
