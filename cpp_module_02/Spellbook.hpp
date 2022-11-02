
#include "ASpell.hpp"

#include <iostream>
#include "ASpell.hpp"
#include <map>

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellName);
		ASpell *createSpell(std::string const &spellName);

	private:
		SpellBook(SpellBook const &other);
		SpellBook &operator=(SpellBook &other);
		std::map<std::string, ASpell *> book;
};