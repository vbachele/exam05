/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:59:29 by vbachele          #+#    #+#             */
/*   Updated: 2022/11/02 13:47:14 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {}
Dummy::~Dummy() {}

ATarget *Dummy::clone() const
{
    return (new Dummy());
}