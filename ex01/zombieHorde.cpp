/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:51:08 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 22:50:30 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.h"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie*	HordeOfProwler = new Zombie[N];
	for (int	i = 0; i < N; i++)
	{
		HordeOfProwler[i].setName(name);
	}
	return(HordeOfProwler);
}
