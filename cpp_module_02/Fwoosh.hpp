
#include "ASpell.hpp"
#include "iostream"

class Fwoosh: public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();

		virtual ASpell *clone() const;
};