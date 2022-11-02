
#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Spellbook.hpp"
#include <map>

class Warlock
{
	public:
		Warlock (std::string const &Wname, std::string const &Wtitle);

		~Warlock ();

		/*** members functions ***/
		std::string const	&getName() const;
		std::string const 	&getTitle() const;
		void 				setTitle(std::string const &newTitle);

		void				learnSpell(ASpell *spell);
		void				forgetSpell(std::string spell);
		void				launchSpell(std::string spell, ATarget const &target);

		void introduce() const;

	private:
		std::string name;
		std::string title;

		Warlock (Warlock &other);
		Warlock ();
		SpellBook book;

		Warlock operator=(Warlock const &other);
};
