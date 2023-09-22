/*
 * Mamifero.h
 *
 *  Created on: 22 sept 2023
 *      Author: crist
 */

#ifndef MAMIFERO_H_
#define MAMIFERO_H_

#include <iostream>
#include<string>
#include "Animal.h"

using namespace std;

class Mamifero: public Animal {
	int patas;
public:
	Mamifero();
	virtual void pureFn();
	virtual ~Mamifero();
};

#endif /* MAMIFERO_H_ */
