#include "Warlock.hpp"

Warlock::Warlock(std::string const &Wname, std::string const &Wtitle)
{
	this->name = Wname;
	this->title = Wtitle;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return (this->name);
}

std::string const &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string  const &newTitle)
{
	this->title = newTitle;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		map.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
	}
}

void Warlock::forgetSpell(std::string spell)
{
	std::map<std::string, ASpell *>::iterator it = map.find(spell);
	if (it != map.end())
		delete it->second;
	map.erase(spell);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target)
{
	ASpell *spell = map[spellName];
	//std::cout << "DEBUG" << std::endl;
	if (spell)
	{
		std::cout << "DEBUG" << std::endl;
		spell->launch(target);
	}
}


