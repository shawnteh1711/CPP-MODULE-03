/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:01:55 by steh              #+#    #+#             */
/*   Updated: 2022/09/02 20:25:18 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTraps.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ClapTraps::ClapTraps(void) : _name("null"), _hit_pts(10), _energy_pts(10), _atk_dmg(0)
{
	this->_class_name = "ClapTraps";
	cout << "ClapTraps default constructor called" << endl;
}

ClapTraps::ClapTraps(string const & name)
{
	this->_class_name = "ClapTraps";
	this->_name = name;
	this->_hit_pts = 10;
	this->_energy_pts = 10;
	this->_atk_dmg = 0;
	cout << "ClapTraps parameter constructor called" << endl;
}

ClapTraps::~ClapTraps(void)
{
	cout << "ClapTraps destructor called for "
	<< this->_name
	<< endl;
}

ClapTraps::ClapTraps(ClapTraps const & src)
{
	*this = src;
	cout << "ClapTraps copy deconstructor called" << endl;
}

const ClapTraps & ClapTraps::operator=(ClapTraps const & rhs)
{
	cout << "ClapTraps assignment operator called" << endl;
	return (rhs);
}

void	ClapTraps::attack(const std::string & target)
{
	//ClapTraps <name> attacks <target>, causing <damage> points of damage!
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

int		ClapTraps::getDmg( void ) const
{
	return (this->_atk_dmg);
}

void	ClapTraps::takeDamage(unsigned int amount)
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

void	ClapTraps::beRepaired(unsigned int amount)
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

void	ClapTraps::print(ClapTraps const & rhs) const
{
	cout << "name       = " << rhs._name << endl;
	cout << "hit points = " << rhs._hit_pts << endl;
	cout << "energy     = " << rhs._energy_pts << endl;
	cout << "atk damage = " << rhs._atk_dmg << endl;
}

int		ClapTraps::ckWeakStatus(void) const
{
	int	i;

	i = 1;
	if (this->_energy_pts == 0 || this->_hit_pts <= 0)
	{
		i = -1;
		cout 
		<< this->_class_name << this->_name
		<< " cannot move, in weak status"
		<< endl;
		ClapTraps::print(*this);
	}
	return (i);
}
