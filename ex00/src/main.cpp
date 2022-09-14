/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:25:40 by steh              #+#    #+#             */
/*   Updated: 2022/09/14 20:51:12 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTraps.hpp"

using std::cin;

int main(void)
{
	ClapTrap	one("one");
	ClapTrap	two("two");
	
	one.attack("two");
	two.takeDamage(one.getDmg());
	one.beRepaired(5);
	one.print(one);

	cout << endl;
	two.attack("one");
	one.takeDamage(two.getDmg());
	two.beRepaired(10);
	two.print(two);
	return (0);
}
