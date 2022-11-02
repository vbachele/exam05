/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:45:19 by vbachele          #+#    #+#             */
/*   Updated: 2022/11/02 12:57:30 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
