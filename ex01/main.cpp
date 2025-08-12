/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:50:14 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 22:54:57 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Error : first arg need to be a number between 0 and 42" << std::endl
			<< "and secand arg need to be a name" << std::endl;
	}

	Zombie*	HordeOfProwler = zombieHorde(std::atoi(argv[1]), static_cast <std::string>(argv[2]));
	for (int	i = 0; i < std::atoi(argv[1]); i++)
	{
		std::cout << "In main area, we can see ";
		HordeOfProwler[i].announce();
		std::cout << std::endl;
	}
	delete[] HordeOfProwler;
}
