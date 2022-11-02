#include "ASpell.hpp"
#pragma once

class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();

		virtual ASpell *clone() const;
};

