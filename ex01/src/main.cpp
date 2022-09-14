/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:33:42 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 20:59:27 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTraps.hpp"

void	test1(void);
void	test2(void);

int main(void)
{
	// test1();
	test2();
	return (0);
}

void	test1(void)
{
	ScavTraps	st("ScavTraps");
	ClapTrap	ct("ClapTrap");
	
	cout << endl;

	st.guardGate();
	ct.attack("ScavTraps");
	st.takeDamage(ct.getDmg());
	st.beRepaired(10);
	st.attack("ClapTrap");
	ct.takeDamage(st.getDmg());
	ct.beRepaired(10);
	// ct.print(ct);
	// st.print(st);
}

void	test2(void)
{
	ScavTraps	*st = new ScavTraps("ScavTraps");
	ClapTrap	*ct = new ClapTrap("ClapTrap");

	ct->attack("ScavTraps");
	st->takeDamage(ct->getDmg());
	st->beRepaired(10);
	st->attack("ClapTrap");
	ct->takeDamage(st->getDmg());
	ct->beRepaired(10);
}
