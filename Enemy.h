// Class CEnemy
// This is the parent class for all the CEnemy objects in the project.
// This class is virtual
//Issac Rodriguez 
#include <string>

class CEnemy
{
	// Member variables
protected:
	// List of items
	std::string szName; // the name of the enemy
	std::string szType; // the type of enemy
public:
	int nHits; // the number of hits required to kill it

// Member functions
public:
	CEnemy();
	CEnemy(int nHits);
	~CEnemy();

	void setHits(int nNumHits);
	int getHits();
	void deductHits();
	virtual bool isDead() = 0;  // This is now an abstract class, all descendant class will implement isDead

	void setName(std::string szName);
	std::string getName();
	std::string getType();

};
#pragma once
