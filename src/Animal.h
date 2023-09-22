/* Animal.h
 * Created on: 22 sept 2023
 * Author: crist */

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Animal {
private:
	string nombre;
	float peso;
	int tiempo_vida;
	vector <string> paises;
public:
	virtual void pureFn() = 0;
	string getNombre();
	void setNombre(string nom);
	float getPeso();
	void setPeso(float pes);
	int getTiempoDeVida();
	void setTiempoDeVida(int tiempo);
	vector<string> getPaises();
	void setPaises(string pais);
	void listarPaises();

	/* teniendo una funcion virtual indicamos que la clase es pura
	 * y que no se puede instanciar, ademas esta funcion virtual pura
	 * solo se define no se desarrolla
	 * */


	/*Animal();
	virtual ~Animal();*/
};

#endif /* ANIMAL_H_ */
