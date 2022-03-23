#pragma once
#include<string>
using namespace std;
class Vehicule
{
protected:
	int id;
	string marque;
	int nombreKilometres;
	float gallonEssence;
public:
	Vehicule(int id, string marque, int nombreKilometres, float gallonEssence);
	void Display();
};

