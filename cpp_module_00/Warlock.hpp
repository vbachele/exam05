/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:08:37 by vbachele          #+#    #+#             */
/*   Updated: 2022/10/26 14:16:15 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Warlock
{
	public:
		Warlock (std::string const &Wname, std::string const &Wtitle);

		~Warlock ();

		std::string const &getName() const;

		std::string const &getTitle() const;

		void setTitle(std::string const &newTitle);

		void introduce() const;

	private:
		std::string name;
		std::string title;

		//Warlock (Warlock &other);
		//Warlock ();

		//Warlock operator=(Warlock const &other);
};