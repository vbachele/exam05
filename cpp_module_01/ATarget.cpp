/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:59:58 by vbachele          #+#    #+#             */
/*   Updated: 2022/10/26 17:46:45 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include "iostream"

ATarget::ATarget()
{

}

ATarget::ATarget(std::string const &Atype)
{
	this->type = Atype;
}

ATarget::~ATarget()
{

}

ATarget &ATarget::operator=(ATarget const &other)
{
	this->type = other.type;
	return (*this);
}

ATarget::ATarget(ATarget const &other)
{
	this->type = other.type;
}

std::string const &ATarget::getType() const
{
	return (this->type);
}

// void	ATarget::getHitBySpell(ASpell const &spell) const
// {
// 	std::cout << this->type << " has been " << spell.getEffects() << std::endl
// }