/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:58:05 by vbachele          #+#    #+#             */
/*   Updated: 2022/10/26 17:55:11 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class ATarget;

class ASpell
{
	public:
		ASpell();
		ASpell(std::string const &Sname, std::string const &Seffects);
		virtual ~ASpell();
		ASpell (ASpell const &other);
		ASpell &operator=(ASpell const &other);

		virtual ASpell *clone() const = 0;

		std::string const &getName() const;
		std::string const &getEffects() const;

		void launch(ATarget const &target) const;

	private:
		std::string name;
		std::string effects;
};

#include "ATarget.hpp"
