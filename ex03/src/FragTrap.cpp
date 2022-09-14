/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:43:29 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 21:19:36 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/FragTraps.hpp"

FragTraps::FragTraps(void)
{
	this->_class_name = "FragTrap";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_atk_dmg = 30;
	cout << "FragTraps default constructor called" << endl;
}

FragTraps::~FragTraps()
{
	cout << "FragTraps destructor called for "
	<< this->_name
	<< endl;
}

FragTraps::FragTraps(string const & name) : ClapTraps(name)
{
	this->_class_name = "FragTrap";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_atk_dmg = 30;
	cout << "FragTraps parameter constructor called" << endl;
}

FragTraps::FragTraps(FragTraps const & src) : ClapTraps(src)
{
	cout << "FragTraps copy constructor called" << endl;
}

FragTraps & FragTraps::operator=(FragTraps const & rhs)
{
	cout << "FragTraps copy-assignment constructor called" << endl;
	(void)rhs;
	return (*this);
}

void	FragTraps::highFivesGuys(void)
{
	cout << "✋ FragTraps highFivesGuys ✋" << endl;
}
