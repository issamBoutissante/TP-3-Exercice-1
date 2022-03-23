#include "Caravane.h"
Caravane::Caravane(int id, string marque, int nombreKilometres, 
	float gallonEssence, int nbrChambre, float superficie)
	:Vehicule(id, marque, nombreKilometres, gallonEssence),
	Logement(nbrChambre, superficie) {
}
void Caravane::Display() {
	Vehicule::Display();
	Logement::Display();
}
