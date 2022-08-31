/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:33:42 by steh              #+#    #+#             */
/*   Updated: 2022/08/31 23:13:34 by steh             ###   ########.fr       */
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
	
	ct.print(ct);
	st.print(st);
	cout << endl;

	ct.attack("ScavTraps");
	st.takeDamage(ct.getDmg());
	st.beRepaired(10);
	st.attack("ClapTrap");
	ct.takeDamage(st.getDmg());
	ct.beRepaired(10);
	return (0);
}
