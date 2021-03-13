/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:03:25 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 12:10:11 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent zombieEvent;
	Zombie *zombie;

	zombieEvent.randomChump();
	zombieEvent.setZombieType("Fee");
	zombie = zombieEvent.newZombie("Francis");
	zombie->advert();
	delete zombie;
	zombieEvent.randomChump();
}