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


void Warlock::learnSpell(ASpell* spell_ptr)
{
	if (spell_ptr)
		map.insert(std::pair<std::string, ASpell *>(spell_ptr->getName(), spell_ptr->clone()));
}

void Warlock::forgetSpell(std::string spell_name)
{
	std::map<std::string, ASpell *>::iterator it = map.find(spell_name);
	if (it != map.end())
		delete it->second;
	map.erase(spell_name);
}

void Warlock::launchSpell(std::string spell_name, ATarget const &target_ref)
{
	ASpell* spell = this->map[spell_name];
	if (spell)
	{
		spell->launch(target_ref);
	}
}
