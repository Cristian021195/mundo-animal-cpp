/*
 * Animal.cpp
 *
 *  Created on: 22 sept 2023
 *      Author: crist
 */
#include<iostream>
#include<string>

#include "Animal.h"


using namespace std;

/*Animal::Animal() {
	// TODO Auto-generated constructor stub

}
Animal::~Animal() {
	// TODO Auto-generated destructor stub
}
*/

int Animal::getTiempoDeVida(){
	return tiempo_vida;
}
void Animal::setTiempoDeVida(int tiempo){
	tiempo_vida = tiempo;
}

string Animal::getNombre(){
	return nombre;
}
void Animal::setNombre(string nom){
	nombre  = nom;
}


float Animal::getPeso(){
	return peso;
}
void Animal::setPeso(float pes){
	peso = pes;
}


vector<string> Animal::getPaises(){
	return paises;
}
void Animal::setPaises(string pais){
	paises.push_back(pais);
}

void Animal::listarPaises(){
	unsigned long i = 0;
	string strout = "";
	while( i < paises.size() ){ // vector.size(): unsigned long int;
		strout += paises[i] + ", ";
		i++;
	}
	cout << strout << endl;
}

