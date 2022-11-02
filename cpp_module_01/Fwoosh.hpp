/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:55:52 by vbachele          #+#    #+#             */
/*   Updated: 2022/11/02 13:32:25 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"
#include "iostream"

class Fwoosh: public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();

		virtual ASpell *clone() const;
};