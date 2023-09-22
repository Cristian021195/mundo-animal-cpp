//============================================================================
// Name        : Prueba.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>

#include "Mamifero.h"

using namespace std;

int main() {
	Mamifero elefante;
	elefante.setNombre("trompita"); elefante.setPaises("Africa"); elefante.setPaises("India");

	Mamifero ballena;
	ballena.setNombre("azul"); ballena.setPaises("Argentina");ballena.setPaises("China");

	/*cout << elefante.getNombre() << endl;
	cout << ballena.getNombre() << endl;*/
	ballena.listarPaises();
	return 0;
}
