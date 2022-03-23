#include "Vehicule.h"
#include<iostream>
Vehicule::Vehicule(int id, string marque, int nombreKilometres, float gallonEssence) {
	this->id = id;
	this->marque = marque;
	this->nombreKilometres = nombreKilometres;
	this->gallonEssence = gallonEssence;
}
void Vehicule::Display() {
	cout << "- Id : " << this->id << endl;
	cout << "- Marque : " << this->marque << endl;
	cout << "- Nombre Kilometres : " << this->nombreKilometres << endl;
	cout << "- Gallon Essence : " << this->gallonEssence <<endl;
}