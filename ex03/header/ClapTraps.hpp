/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTraps.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:00:50 by steh              #+#    #+#             */
/*   Updated: 2022/09/02 22:00:44 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTraps
{
	protected:
		string	_name;
		int		_hit_pts;
		int		_energy_pts;
		int		_atk_dmg;
		string	_class_name;

	public:
		ClapTraps(void);
		ClapTraps(string const & name);
		ClapTraps(ClapTraps const & src);
		const ClapTraps & operator=(ClapTraps const & rhs);
		~ClapTraps(void);

		void			attack(const std::string & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		// virtual void	takeDamage(unsigned int amount);
		// virtual void	beRepaired(unsigned int amount);
		void			print(ClapTraps const & rhs) const;
		int				ckWeakStatus(void) const;
		int				getDmg(void) const;

};

#endif
