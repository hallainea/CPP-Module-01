/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:30:02 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 19:53:13 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(time(NULL));
	if (n <= 0)
		throw "Invalid amount of zombies.";
	ZombieHorde::amount = n;
	std::string name[] = {
		"Sylvain",
		"Antoine",
		"Rémi",
		"Eric",
		"Marine"};
	ZombieHorde::zombie = new Zombie[n];
	while (n--)
		ZombieHorde::zombie[n].init(name[rand() % sizeof(name) / sizeof(*name)], "unknown");
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] ZombieHorde::zombie;
}

void ZombieHorde::advert(void)
{
	int n = ZombieHorde::amount;
	while (n--)
		ZombieHorde::zombie[n].advert();
}
