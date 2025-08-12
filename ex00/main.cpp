/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:02:07 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 19:20:59 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Zombies need a name, not 0, 2, 3, just each one name and they are two" << std::endl;
		return (1);
	}
	Zombie*	prowlerInMain = newZombie(static_cast <std::string>(argv[1]));
	std::cout << "People : Oooh help a zombie comes in the mainroom from newZombie functionroom HHHEEeeeeellllppp" << std::endl;
	std::cout << "\033[31m";
	prowlerInMain->announce();
	std::cout << "Someone : Argghh he eats me" << std::endl;
	randomChump(static_cast <std::string>(argv[2]));
	std::cout << "People : Another zombie comes in the mainroom but from randomChump functionroom this time HHHEEeeeeellllppp" << std::endl;
	std::cout << "People : Phew it wasn't a zombie this time, it is the idiot of the village who got stuck behind the door" << std::endl;
	delete prowlerInMain;
	return (0);

}
