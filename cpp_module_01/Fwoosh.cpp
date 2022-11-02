/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:03:07 by vbachele          #+#    #+#             */
/*   Updated: 2022/11/02 13:50:28 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"


Fwoosh::Fwoosh(): ASpell("fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh()
{

}

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}

