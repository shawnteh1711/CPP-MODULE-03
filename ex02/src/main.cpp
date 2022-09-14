/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:15:53 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 21:07:49 by steh             ###   ########.fr       */
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

	ft.highFivesGuys();
	ft.attack("ScavTraps");
	st.takeDamage(ft.getDmg());
	st.guardGate();
	st.attack("ClapTraps");
	ct.takeDamage(st.getDmg());
	ct.attack("FragTrap");

	// ct weak so no attack
	ft.takeDamage(ct.getDmg());
	ft.beRepaired(10);
	ft.print(ft);
	return 0;
}
