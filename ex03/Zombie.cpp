/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:24:38 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 19:39:57 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("unknown"), type("unknown")
{
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
}

void Zombie::init(std::string name, std::string type)
{
	Zombie::name = name;
	Zombie::type = type;
}

void Zombie::advert(void)
{
	std::cout << '<' << Zombie::name << " (" << Zombie::type << ")> Braiiiiiiinnnssss ..." << std::endl;
}