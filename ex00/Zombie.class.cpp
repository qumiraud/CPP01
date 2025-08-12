/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:03:12 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 19:37:47 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	Zombie::call = 0;

void Zombie::announce(void)
{
	std::cout << this->HisName << " : BraiiiiiiinnnzzzZ..." << "\033[0m" <<std::endl;
}

Zombie::Zombie(std:: string Name)
{
	this->HisName = Name;
	Zombie::call += 1;
	this->call_nb = Zombie::call;
	this->announce();
}

Zombie::~Zombie()
{
	if (this->call_nb == 1)
		std::cout << "\033[33m" << this->HisName << " ends up decomposing" << "\033[0m" <<std::endl;
	else if (this->call_nb == 2)
		std::cout << "\033[36m" << this->HisName << " ends up looking elsewhere if I am there" << "\033[0m" <<std::endl;

}
