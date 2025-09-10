/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:14:14 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/10 14:05:19 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

void	Harl::debug(void)
{
	std::cout << "debug" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "info" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "warning" << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "error" << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int	index;
	std::string	compare[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (index = 0; index < 4; index++)
	{
		if (level == compare[index])
			break;
	}
	switch (index)
	{
		case 0:
			(this->*_inventoryFunctions[0])();
			// fall through
		case 1:
			(this->*_inventoryFunctions[1])();
			// fall through
		case 2:
			(this->*_inventoryFunctions[2])();
			// fall through
		case 3:
			(this->*_inventoryFunctions[3])();
			break;
		default:
			std:: cout << "Error : bad entry, exit" << std::endl;
			ask = 1;
			break;
	}
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
