/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:47:42 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 21:11:03 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTraps.hpp"

ScavTraps::ScavTraps(void) : ClapTrap()
{
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_atk_dmg = 20;
}

ScavTraps::~ScavTraps()
{
	cout << "ScavTrap deconstructor called" << endl;
}