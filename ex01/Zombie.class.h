/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 21:50:36 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/12 22:55:53 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <stdlib.h>

class Zombie
{
private:
	std::string	HisName;
public:
	void	setName(std::string name);
	void	announce(void) const;
	Zombie();
	~Zombie();
};


Zombie* zombieHorde( int N, std::string name );

#endif
