/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:15:53 by steh              #+#    #+#             */
/*   Updated: 2022/09/01 22:12:24 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTraps.hpp"
#include "ScavTraps.hpp"
#include "ClapTraps.hpp"

int main(void)
{
	FragTraps	ft("FragTrap");
	ScavTraps	st("ScavTraps");
	ClapTrap	ct("ClapTraps");

	ft.attack("ScavTraps");
	st.attack("ClapTraps");
	ct.attack("FragTrap");

	ft.highFivesGuys();
	// ft.takeDamage(st.getDmg());
	ft.beRepaired(10);
	ft.print(ft);
	return 0;
}
