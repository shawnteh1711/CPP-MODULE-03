/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:01:55 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 20:35:41 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTraps.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(void) : _name("null"), _hit_pts(10), _energy_pts(10), _atk_dmg(0)
{
	cout << "blank constructor called" << endl;
}

ClapTrap::ClapTrap(string name)
{
	this->_name = name;
	this->_hit_pts = 10;
	this->_energy_pts = 10;
	this->_atk_dmg = 0;
	cout << "parameter constructor called" << endl;
}

ClapTrap::~ClapTrap(void)
{
	cout << "deconstructor called" << endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	cout << "copy deconstructor called" << endl;
}

const ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	cout << "assignment operator called" << endl;
	return (rhs);
}

void	ClapTrap::attack(const std::string & target)
{
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	cout 
	<< " ClapTrap " << this->_name
	<< " attacks " << target
	<< " causing " << this->_atk_dmg
	<< " points of damage "
	<< endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout
	<< " ClapTrap " << this->_name
	<< " lose " << amount
	<< " hit points "
	<< endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	cout
	<< " ClapTrap " << this->_name
	<< " get " << amount
	<< " hit points back"
	<< endl;
}
