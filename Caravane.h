#pragma once
#include "Vehicule.h"
#include "Logement.h"
class Caravane:public Vehicule,public Logement
{
public:
	Caravane(int id, string marque, int nombreKilometres, 
		float gallonEssence, int nbrChambre, float superficie);
	void Display();
};

