#pragma once
#include "Zombie.h"
class ZombieDancer : public Zombie
{
	int nivelDestrezaBaile = 10;
public:
	//Contructores
	ZombieDancer() {};
	ZombieDancer(string _nombre) : Zombie(_nombre) {};

	//Metodos accesores
	int getNivelDestrezaBaile() { return nivelDestrezaBaile; }
	void setNivelDestrezaBaile(int _nivelDestrezaBaile) { nivelDestrezaBaile = _nivelDestrezaBaile; }

	//Metodos propios
	void bailar();
};

