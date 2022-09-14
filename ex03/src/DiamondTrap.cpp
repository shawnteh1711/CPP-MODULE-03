/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:30:12 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 21:12:51 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/DiamondTraps.hpp"

DiamondTraps::DiamondTraps(void)
{
	this->_class_name = "DiamondTraps";
	this->_name = "null";
	this->_hit_pts = FragTraps::_hit_pts; // 100
	this->_energy_pts = ScavTraps::_energy_pts; //50
	this->_atk_dmg = FragTraps::_atk_dmg; // 30
	cout << "DiamondTraps default constructor called" << endl;
}

DiamondTraps::~DiamondTraps(void)
{
	cout << "DiamondTraps destructor called for " 
	<< this->_name
	<< endl;
}

DiamondTraps::DiamondTraps(string const & name)
{
	this->ClapTraps::_name = name + "_clap_name";
	this->_name = name;
	this->_class_name = "DiamondTraps";
	this->_hit_pts = FragTraps::_hit_pts;
	this->_energy_pts = ScavTraps::_energy_pts;
	// this->_atk_dmg = FragTraps::_atk_dmg;
	// this->FragTraps::_hit_pts = 100;
	// this->ScavTraps::_energy_pts = 50;
	this->FragTraps::_atk_dmg = 30;
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
	this->ScavTraps::attack(target);
}

void	DiamondTraps::whoAmI(void)
{
	cout
	<< "DiamondTrap name is "
	<< this->_name
	<< endl;
	cout
	<< "ClapTrap name is "
	<< this->ClapTraps::_name
	<< endl;
}
