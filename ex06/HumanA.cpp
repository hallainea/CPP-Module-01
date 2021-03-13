/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:20:10 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 20:45:44 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name) : name(name)
{
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(&weapon)
{
}

void HumanA::setWeapon(Weapon &weapon)
{
	HumanA::weapon = &weapon;
}

void HumanA::attack(void)
{
	std::cout << HumanA::name << " attacks with his " << HumanA::weapon->getType() << std::endl;
}
