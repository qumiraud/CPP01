/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:03:57 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 19:42:12 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

void randomChump( std::string name )
{
	std::cout << "\033[32m";
	Zombie VillageIdiot(name);
	std::cout << "People in the main room: Another zombie comes in the mainroom but from randomChump functionroom this time HHHEEeeeeellllppp" << std::endl;
	std::cout << name << " try to leave the function room" << std::endl;
}
