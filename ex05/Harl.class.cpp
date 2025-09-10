/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:06:16 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/10 12:45:49 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	index;
	std::string	compare[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (index = 0; index < 4; index++)
	{
		if (level == compare[index])
		{
			(this->*_inventoryFunctions[index])();
			return ;
		}
	}
	ask = 1;
	std::cout << "Error : bad entry, exit" << std::endl;
}

Harl::Harl()
{
	_inventoryFunctions[0] = &Harl::debug;
	_inventoryFunctions[1] = &Harl::info;
	_inventoryFunctions[2] = &Harl::warning;
	_inventoryFunctions[3] = &Harl::error;
}

Harl::~Harl()
{
}
