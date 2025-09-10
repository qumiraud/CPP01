/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:49:39 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/10 14:04:27 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "Harl.class.hpp"


int	Harl::ask;

int	main(void)
{
	Harl	robot;
	while (Harl::ask == 0)
	{
		std::string entry;
		std::cout << "entry : "; std::cin >> entry;
		robot.complain(entry);
	}

	return (0);
}
