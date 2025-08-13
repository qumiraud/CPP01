/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:43:47 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/13 14:04:23 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include <iostream>
#include <stdlib.h>
#include "Weapon.class.hpp"


class HumanB
{
	private:
		std::string	HumanName;
		Weapon*		WeaponName;
	public:
		void		attack(void);
		void		setWeapon(Weapon& TypeWeapon);
		HumanB(std::string Name);
		~HumanB();
};

#endif
