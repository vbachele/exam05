#include "ATarget.hpp"
#include "iostream"

ATarget::ATarget()
{

}

ATarget::ATarget(std::string const &Atype)
{
	this->type = Atype;
}

ATarget::~ATarget()
{

}

ATarget &ATarget::operator=(ATarget const &other)
{
	this->type = other.type;
	return (*this);
}

ATarget::ATarget(ATarget const &other)
{
	this->type = other.type;
}

/*** member functions ***/

std::string const &ATarget::getType() const
{
	return (this->type);
}

void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << std::endl;
}