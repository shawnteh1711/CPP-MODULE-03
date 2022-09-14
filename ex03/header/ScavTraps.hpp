/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTraps.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:45:56 by steh              #+#    #+#             */
/*   Updated: 2022/09/02 22:00:48 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAPS_HPP
# define SCAV_TRAPS_HPP

#include "ClapTraps.hpp"
#include <iostream>

using std::string;
class ScavTraps : virtual public ClapTraps
{
	protected:
		bool	_guard;
	public:
		ScavTraps(void);
		ScavTraps(string const & name);
		ScavTraps(ScavTraps const & src);
		ScavTraps & operator=(ScavTraps const & rhs);
		~ScavTraps(void);

		void	guardGate(void);
		// void	attack(const std::string & target);
		// void	takeDamage(unsigned int amount);
		// void	beRepaired(unsigned int amount);


};

#endif
