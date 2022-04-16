#pragma once
#include "Organism.h"

class Plant : public Organism {
public:
	Plant(World* world, char sign, int strength, int initative, int lifeTime, COORDS coordinates, int breedingTimeout);
	void action(World* world) override;
	void Kill(Organism* a, bool won)override;
	void collision(Organism* other) override;
	virtual void Spread() = 0;
	bool SpreadProbability();
	~Plant()override;

};