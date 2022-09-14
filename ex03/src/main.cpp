/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:02:45 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 21:25:31 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/FragTraps.hpp"
#include "../header/ScavTraps.hpp"
#include "../header/ClapTraps.hpp"
#include "../header/DiamondTraps.hpp"
#include <iomanip>

int main(void)
{
	DiamondTraps	dt("DiamondTrap");
	ScavTraps		st("ScavTrap");
	FragTraps		ft("FragTrap");

	dt.whoAmI();
	dt.print(dt);
	cout << endl;
	st.print(st);
	cout << endl;
	ft.print(ft);
	dt.attack("ScavTrap");
	st.takeDamage(dt.getDmg());
	dt.print(dt);  //reduce energy
	st.attack("DiamondTrap");
	dt.takeDamage(st.getDmg());
	dt.print(dt); // reduce hit point
	dt.beRepaired(10);
	dt.print(dt); //regain hit point
	return 0;
}
