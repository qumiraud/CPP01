/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:44:09 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/13 14:04:15 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

void	HumanB::attack(void)
{
	std::cout << this->HumanName << " attacks with their "
		<< this->WeaponName->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon &TypeWeapon)
{
	this->WeaponName = &TypeWeapon;
}

HumanB::HumanB(std::string	Name)
{
	this->HumanName = Name;
	this->WeaponName = NULL;
}

HumanB::~HumanB()
{
}