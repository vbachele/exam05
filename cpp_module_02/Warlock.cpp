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
	std::cout << this->name << ": I am " << this->name << ", " << this->title << std::endl;
}


void Warlock::learnSpell(ASpell* spell_ptr)
{
	book.learnSpell(spell_ptr);
}

void Warlock::forgetSpell(std::string spellName)
{
	book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget const &target_ref)
{
	ASpell *spell = this->book.createSpell(spellName);
	if (spell)
	{
		spell->launch(target_ref);
	}
}