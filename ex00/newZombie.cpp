/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:03:44 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 19:20:19 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* newZombie( std::string name )
{
	std::cout << "\033[31m";
	Zombie*	prowler = new Zombie(name);
	std::cout << name << " leave the function room" << std::endl;
	return (prowler);
}
