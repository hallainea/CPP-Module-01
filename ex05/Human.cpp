/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:02:56 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/13 20:12:33 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) : brain(new Brain)
{
}
Human::~Human(void)
{
	delete Human::brain;
}

Brain &Human::getBrain(void)
{
	return (*Human::brain);
}

std::string Human::identify(void)
{
	return (Human::getBrain().identify());
}
