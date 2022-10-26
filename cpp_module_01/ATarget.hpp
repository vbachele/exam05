/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:45:19 by vbachele          #+#    #+#             */
/*   Updated: 2022/10/26 17:51:28 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget();
		ATarget(std::string const &Atype);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &other);
		ATarget(ATarget const &other);


		virtual ATarget *clone() const = 0;

		std::string const &getType() const;

		//void getHitBySpell(Aspell const &spell) const;


	private:
		std::string type;
};
