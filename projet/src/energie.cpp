#include "energie.h"

energie::energie()
{
}

energie::energie(std::string nom, std::string description, int type) : carte(nom,description), m_type(type)
{
}

energie::~energie()
{
}
