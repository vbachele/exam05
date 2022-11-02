
#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::ASpell(std::string const &Sname, std::string const &Seffects)
{
	this->name = Sname;
	this->effects = Seffects;
}

ASpell::ASpell(ASpell const &other)
{
	*this = other;
}

ASpell &ASpell::operator=(ASpell const &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return (*this);
}

ASpell::~ASpell()
{

}

/*** member functions  ***/

std::string const &ASpell::getName() const
{
	return (this->name);
}

std::string const &ASpell::getEffects() const
{
	return (this->effects);
}

void	ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell((*this));
}