/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:41:58 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/13 13:54:03 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

std::string	Weapon::getType(void) const
{
	return (this->WeaponName);
}

void	Weapon::setType(std::string WeapName)
{
	this->WeaponName = WeapName;
}

Weapon::Weapon(std::string WeapName)
{
	std::cout << "constructor called" << std::endl;
	this->setType(WeapName);
}

Weapon::~Weapon()
{
}