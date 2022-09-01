/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:30:12 by steh              #+#    #+#             */
/*   Updated: 2022/09/01 23:06:01 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTraps.hpp"

DiamondTraps::DiamondTraps(void)
{
	this->_class_name = "DiamondTrap";
	this->_hit_pts = FragTraps::_hit_pts; // 100
	this->_energy_pts = ScavTraps::_energy_pts; //50
	this->_atk_dmg = FragTraps::_atk_dmg; // 30
	cout << "DiamondTraps constructor called" << endl;
}

DiamondTraps::~DiamondTraps(void)
{
	cout << "DiamondTraps deconstructor called for " 
	<< this->_name
	<< endl;
}

DiamondTraps::DiamondTraps(string const name) : _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_class_name = "DiamondTrap";
	this->_hit_pts = FragTraps::_hit_pts;
	this->_energy_pts = ScavTraps::_energy_pts;
	this->_atk_dmg = FragTraps::_atk_dmg;
	cout << "DiamondTraps parameter constructor called" << endl;

}

DiamondTraps::DiamondTraps(DiamondTraps const & src) : FragTraps(src), ScavTraps(src)
{
	cout << "DiamondTraps copy constructor called" << endl;
}

DiamondTraps & DiamondTraps::operator=(DiamondTraps const & rhs)
{
	cout << "DiamondTraps copy-assignment constructor called" << endl;
	(void)rhs;
	return (*this);
}

void	DiamondTraps::attack(const std::string & target)
{
	ScavTraps::attack(target);
}

void	DiamondTraps::whoAmI(void)
{
	cout
	<< "DiamondTrap name is "
	<< this->_name
	<< endl;
	cout
	<< "ClapTrap name is "
	<< ClapTrap::_name
	<< endl;
}
