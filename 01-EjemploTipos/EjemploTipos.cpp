/*
* main.cpp
* Resolución de Ejercicio 01 para comisión K1051, AyED 2022.
* Facundo García Pergañeda (177.045-7)
* 28/04/22
*/

#include <iostream>
#include <cassert>

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
	
}
