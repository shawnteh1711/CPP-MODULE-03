/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTraps.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:41:58 by steh              #+#    #+#             */
/*   Updated: 2022/09/15 21:43:37 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
 #define FRAG_TRAP_HPP

#include "ClapTraps.hpp"

class FragTraps : virtual public ClapTraps
{
	protected:
		int		_hit_pts;
		int		_atk_dmg;
	public:
		FragTraps(void);
		FragTraps(string const & name);
		FragTraps(FragTraps const & src);
		FragTraps & operator=(FragTraps const & rhs);
		~FragTraps(void);

		void	highFivesGuys(void);
};

#endif
