/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 10:30:55 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 19:52:48 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : type("unknown")
{
	srand(time(NULL));
}

void ZombieEvent::setZombieType(std::string type)
{
	ZombieEvent::type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, ZombieEvent::type));
}

void ZombieEvent::randomChump(void)
{
	std::string name[] = {
		"Sylvain",
		"Antoine",
		"Rémi",
		"Eric",
		"Marine"};
	Zombie zombie = Zombie(name[rand() % sizeof(name) / sizeof(*name)], ZombieEvent::type);
	zombie.advert();
}
