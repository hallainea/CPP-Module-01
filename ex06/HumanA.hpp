/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:18:21 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 20:44:36 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanA(std::string name);
	HumanA(std::string name, Weapon &weapon);
	void setWeapon(Weapon &weapon);
	void attack(void);
};
#endif
