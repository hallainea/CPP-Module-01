/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:46:12 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 20:46:31 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::HumanB(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << HumanB::name << " attacks with his " << HumanB::weapon->getType() << std::endl;
}
