/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTraps.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:54:22 by steh              #+#    #+#             */
/*   Updated: 2022/09/01 23:04:08 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

#include "ClapTraps.hpp"
#include "ScavTraps.hpp"
#include "FragTraps.hpp"

#include <iostream>
using std::string;

class DiamondTraps : public FragTraps, public ScavTraps
{
	private:
		string	_name;
	public:
		DiamondTraps(void);
		DiamondTraps(string const name);
		DiamondTraps(DiamondTraps const & src);
		DiamondTraps & operator=(DiamondTraps const & rhs);
		~DiamondTraps(void);

		void	whoAmI(void);
		void	attack(const std::string & target);

};

#endif
