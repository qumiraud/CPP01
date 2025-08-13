/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:41:42 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/13 08:46:35 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <iostream>
#include <stdlib.h>

class Weapon
{
	private:
		std::string	WeaponName;
	public:
		void	setType(std::string WeapName);
		std::string	getType() const;
		Weapon(std::string WeapName);
		~Weapon();
};


#endif
