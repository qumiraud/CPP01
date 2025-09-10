/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:05:53 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/10 12:45:11 by qumiraud         ###   ########.fr       */
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
		std::cin >> entry;
		robot.complain(entry);
	}
	
	return (0);
}
