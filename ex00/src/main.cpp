/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:25:40 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 20:36:26 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTraps.hpp"

using std::cin;

int main(void)
{
	ClapTrap	ct("shawn");
	
	ct.attack("target");
	ct.takeDamage(30);
	ct.beRepaired(20);
	return (0);
}
