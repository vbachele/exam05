#include "Spellbook.hpp"

SpellBook::SpellBook()
{

}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator itBegin = this->book.begin();
	std::map<std::string, ASpell *>::iterator itEnd = this->book.end();
	for (;itBegin != itEnd; itBegin++)
		delete itBegin->second;
	this->book.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		book.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->book.find(spellName);
	if (it != book.end())
		delete it->second;
	book.erase(spellName);
}

ASpell *SpellBook::createSpell(std::string const &spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->book.find(spellName);
	if (it != this->book.end())
		return (this->book[spellName]);
	return NULL;
}