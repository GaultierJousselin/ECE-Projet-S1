#include "creature.h"

creature::creature()
{
}

creature::creature(std::string nom, std::string description, int pv, std::vector <attaque> attaque) : carte(nom,description), m_pv(pv), m_attaque(attaque)
{
}

creature::~creature()
{
}
