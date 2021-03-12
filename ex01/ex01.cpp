/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 19:44:38 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/12 19:45:22 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak(void)
{
	std::string panthere = std::string("String panthere");
	std::cout << panthere << std::endl;
}

int main(void)
{
	memoryLeak();
}