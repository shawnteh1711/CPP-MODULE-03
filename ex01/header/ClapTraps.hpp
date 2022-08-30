/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTraps.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:50 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 20:32:39 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
	private:
		string	_name;
		int		_hit_pts;
		int		_energy_pts;
		int		_atk_dmg;

	public:
		ClapTrap(void);
		ClapTrap(string name);
		ClapTrap(ClapTrap const & src);
		const ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap(void);

		void	attack(const std::string & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
