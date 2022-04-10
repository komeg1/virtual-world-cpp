#pragma once
#include "Animal.h"
class Wolf : public Animal
{
public:
	Wolf(int x,int y, World* world);
	char GetSign() const override;
	bool GetTurn() const override;
	int GetStrength()const override;
	int GetInitiative() const override;
	int GetlifeTime() const override;
	COORDS GetCoordinates() const override;


	~Wolf() override;

};

