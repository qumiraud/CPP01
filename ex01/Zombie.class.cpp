/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:51:14 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 22:55:45 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.h"

void	Zombie::announce(void) const
{
	std::cout << this->HisName << " : BraiiiiiiinnnzzzZ..." << "\033[0m" <<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->HisName = name;
	this->announce();
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->HisName << " ends up decomposing" <<std::endl;
}
