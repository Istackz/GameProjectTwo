// Enemy.cpp
//Issac Rodriguez 
#include "Enemy.h"

// Default Constructor
CEnemy::CEnemy()
{
}

// Custom Constructor
CEnemy::CEnemy(int nHits)
{
	this->nHits = nHits;
}

CEnemy::~CEnemy()
{
}

void CEnemy::setHits(int nNumHits)
{
	this->nHits = nNumHits;
}

int CEnemy::getHits()
{
	return nHits;
}

void CEnemy::deductHits()
{
	nHits--; // subtract one from his hit points
}

bool CEnemy::isDead()
{
	if (nHits == 0)
		return true;
	else
		return false;
}

void CEnemy::setName(std::string szInName)
{
	szName = szInName;
}

std::string CEnemy::getName()
{
	return szName;
}

std::string CEnemy::getType()
{
	return szType;
}
