/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:47:42 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 21:19:13 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ScavTraps.hpp"

ScavTraps::ScavTraps(void) : _guard(false)
{
	this->_class_name = "ScavTrap";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_atk_dmg = 20;
	cout << "ScavTrap default constructor called" << endl;
}

ScavTraps::~ScavTraps()
{
	cout << "ScavTrap destructor called for " 
	<< this->_name
	<< endl;
}

ScavTraps::ScavTraps(string const & name) : ClapTraps(name), _guard(false)
{
	this->_class_name = "ScavTrap";
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_atk_dmg = 20;
	cout << "ScavTrap parameter constructor called" << endl;
}

ScavTraps::ScavTraps(ScavTraps const & src) : ClapTraps(src)
{
	cout << "ScavTrap copy constructor called" << endl;
}

ScavTraps	& ScavTraps::operator=(ScavTraps const & rhs)
{
	cout << "ScavTrap cop-assignment constructor called" << endl;
	(void)rhs;
	return (*this);
}

void	ScavTraps::guardGate(void)
{
	this->_guard = true;
	cout << "Guard Mode on" << endl;
}

// void	ScavTraps::attack(const std::string & target)
// {
// 	//ScavTraps <name> attacks <target>, causing <damage> points of damage!
// 	if (ckWeakStatus() == -1)
// 		return ;
// 	this->_energy_pts--;
// 	cout 
// 	<< " ScavTraps " << this->_name
// 	<< " attacks " << target
// 	<< " causing " << this->_atk_dmg
// 	<< " points of damage "
// 	<< endl;
// }


// void	ScavTraps::takeDamage(unsigned int amount)
// {
// 	if (ckWeakStatus() == -1)
// 		return ;
// 	if (this->_guard == true)
// 	{
// 		cout << "Guard Mode on. no damage taken" << endl;
// 		return ;
// 	}
// 	this->_hit_pts -= amount;
// 	cout
// 	<< " ScavTraps " << this->_name
// 	<< " lose " << amount
// 	<< " hit points "
// 	<< endl;
// }

// void	ScavTraps::beRepaired(unsigned int amount)
// {
// 	if (ckWeakStatus() == -1)
// 		return ;
// 	this->_energy_pts--;
// 	this->_hit_pts += amount;
// 	cout
// 	<< " ScavTraps " << this->_name
// 	<< " get " << amount
// 	<< " hit points back"
// 	<< endl;
// }
