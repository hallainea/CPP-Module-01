/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:16:57 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 20:29:28 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type("unknown")
{
}
Weapon::Weapon(std::string type) : type(type)
{
}

void Weapon::setType(std::string type)
{
	Weapon::type = type;
}

std::string Weapon::getType(void)
{
	return (Weapon::type);
}
