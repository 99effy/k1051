/*
* main.cpp
* Resolución de Ejercicio 01 para comisión K1051, AyED 2022.
* Facundo García Pergañeda (177.045-7)
* 28/04/22
*/

#include <iostream>
#include <cassert>

int main() {
	const bool booleano = true;
	const char caracter = 'A';
	const unsigned int enteroSinSigno = 38292;
	const int entero = -2932;
	const double decimal = 293.92;
	const std::string cadenaDeCaracteres = "Prueba";

	assert(booleano);
	assert(caracter == 'A');
	assert(enteroSinSigno >= 0);
	assert(entero < 0);
	assert(decimal > 293 && decimal < 294);
	assert(!cadenaDeCaracteres.compare("Prueba"));

	std::cout << typeid(booleano).name();
}
