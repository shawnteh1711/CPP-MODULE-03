/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:43:29 by steh              #+#    #+#             */
/*   Updated: 2022/09/02 20:12:13 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTraps.hpp"

FragTraps::FragTraps(void)
{
	this->_class_name = "FragTrap";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_atk_dmg = 30;
	cout << "FragTraps default constructor called" << endl;
}

FragTraps::~FragTraps(void)
{
	cout << "FragTraps deconstructor called for " 
	<< this->_name
	<< endl;
}

FragTraps::FragTraps(string const & name) : ClapTrap(name)
{
	this->_class_name = "FragTrap";
	this->_hit_pts = 100;
	this->_energy_pts = 100;
	this->_atk_dmg = 30;
	cout << "FragTraps parameter constructor called" << endl;
}

FragTraps::FragTraps(FragTraps const & src) : ClapTrap(src)
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
