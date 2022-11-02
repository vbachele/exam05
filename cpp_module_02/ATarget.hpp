#pragma once
#include <iostream>

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string const &Atype);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &other);
		ATarget(ATarget const &other);

		/*** member functions ***/

		virtual ATarget *clone() const = 0;

		std::string const &getType() const;

		void getHitBySpell(ASpell const &spell) const;


	private:
		std::string type;
};

#include "ASpell.hpp"
