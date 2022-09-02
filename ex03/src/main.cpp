/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:02:45 by steh              #+#    #+#             */
/*   Updated: 2022/09/02 20:27:36 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTraps.hpp"
#include "ScavTraps.hpp"
#include "ClapTraps.hpp"
#include "DiamondTraps.hpp"

int main(void)
{
	DiamondTraps	dt("DiamondTrap");
	ScavTraps		st("ScavTrap");
	FragTraps		ft("ScavTrap");

	dt.whoAmI();
	dt.print(dt);
	// dt.attack("ScavTrap");
	st.print(st);
	st.takeDamage(dt.getDmg());
	st.print(st);
	// dt.takeDamage(st.getDmg());
	// dt.beRepaired(10);
	// dt.print(dt);
	return 0;
}
