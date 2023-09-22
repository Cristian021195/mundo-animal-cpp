/*
 * Mamifero.cpp
 *
 *  Created on: 22 sept 2023
 *      Author: crist
 */
#include <iostream>
#include "Mamifero.h"

using namespace std;

Mamifero::Mamifero() {
	cout << "Se crea mamifero" <<endl;
}

Mamifero::~Mamifero() {
	cout << "Se elimina mamifero" <<endl;
}

void Mamifero::pureFn(){
	cout << "pureFn desde Mamifero" <<endl;
}
