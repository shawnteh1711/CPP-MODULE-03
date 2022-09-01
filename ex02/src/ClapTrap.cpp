/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:01:55 by steh              #+#    #+#             */
/*   Updated: 2022/09/01 22:23:54 by steh             ###   ########.fr       */
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
	this->_class_name = "ClapTrap";
	cout << "ClapTrap blank constructor called" << endl;
}

ClapTrap::ClapTrap(string const name)
{
	this->_class_name = "ClapTrap";
	this->_name = name;
	this->_hit_pts = 10;
	this->_energy_pts = 10;
	this->_atk_dmg = 0;
	cout << "ClapTrap parameter constructor called" << endl;
}

ClapTrap::~ClapTrap(void)
{
	cout << "ClapTrap deconstructor called for "
	<< this->_name
	<< endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	cout << "ClapTrap copy deconstructor called" << endl;
}

const ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	cout << "ClapTrap assignment operator called" << endl;
	return (rhs);
}

void	ClapTrap::attack(const std::string & target)
{
	//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	if (ckWeakStatus() == -1)
		return ;
	this->_energy_pts--;
	cout
	<< this->_class_name 
	<< " " << this->_name
	<< " attacks " << target
	<< " causing " << this->_atk_dmg
	<< " points of damage "
	<< endl;
}

int		ClapTrap::getDmg( void ) const
{
	return (this->_atk_dmg);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (ckWeakStatus() == -1)
		return ;
	this->_hit_pts -= amount;
	cout
	<< this->_class_name 
	<< " " << this->_name
	<< " lose " << amount
	<< " hit points "
	<< endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (ckWeakStatus() == -1)
		return ;
	this->_energy_pts--;
	this->_hit_pts += amount;
	cout
	<< this->_class_name 
	<< " " << this->_name
	<< " get " << amount
	<< " hit points back"
	<< endl;
}

void	ClapTrap::print(ClapTrap const & rhs) const
{
	cout << "name       = " << rhs._name << endl;
	cout << "hit points = " << rhs._hit_pts << endl;
	cout << "energy     = " << rhs._energy_pts << endl;
	cout << "atk damage = " << rhs._atk_dmg << endl;
}

int		ClapTrap::ckWeakStatus(void) const
{
	int	i;

	i = 1;
	if (this->_energy_pts == 0 || this->_hit_pts <= 0)
	{
		i = -1;
		cout 
		<< this->_class_name 
		<< " "
		<< this->_name
		<< " cannot move, in weak status"
		<< endl;
		ClapTrap::print(*this);
	}
	return (i);
}
