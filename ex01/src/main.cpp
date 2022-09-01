/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:33:42 by steh              #+#    #+#             */
/*   Updated: 2022/09/01 22:24:58 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTraps.hpp"

int main(void)
{
	// ScavTraps	*st = new ScavTraps("ScavTraps");
	// ClapTrap	*ct = new ClapTrap("ClapTrap");

	// ct->attack("ScavTraps");
	// st->takeDamage(ct->getDmg());
	// st->beRepaired(10);
	// st->attack("ClapTrap");
	// ct->takeDamage(st->getDmg());
	// ct->beRepaired(10);

	ScavTraps	st("ScavTraps");
	ClapTrap	ct("ClapTrap");
	
	cout << endl;

	ct.attack("ScavTraps");
	st.takeDamage(ct.getDmg());
	st.beRepaired(10);
	st.attack("ClapTrap");
	ct.takeDamage(st.getDmg());
	ct.beRepaired(10);
	// ct.print(ct);
	// st.print(st);
	return (0);
}
