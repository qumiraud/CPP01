/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:03:28 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 19:34:23 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>

class Zombie
{
private:
	std::string	HisName;
	int	call_nb;
public:
	static int	call;
	void	announce(void);
	Zombie(std::string HisName);
	~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );



