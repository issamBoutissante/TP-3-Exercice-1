#include "Logement.h"
#include<iostream>
using namespace std;
Logement::Logement(int nbrChambre, float superficie) {
	this->nbrChambre = nbrChambre;
	this->superficie = superficie;
}
void Logement::Display() {
	cout << "- Nombre Chambres : " << this->nbrChambre << endl;
	cout << "- Superficie : " << this->superficie << endl;
}