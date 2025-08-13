/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:42:49 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/13 13:33:15 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

void	HumanA::attack(void)
{
	std::cout << this->AName << " attacks with their "
		<< this->TypeWeapon.getType() << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &WeapName): AName(Name), TypeWeapon(WeapName)
{
}

HumanA::~HumanA()
{
}