/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:08:37 by vbachele          #+#    #+#             */
/*   Updated: 2022/11/02 14:46:04 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
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
		std::map<std::string, ASpell *> map;

		Warlock (Warlock &other);
		Warlock ();

		Warlock operator=(Warlock const &other);
};
