/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 08:42:35 by qumiraud          #+#    #+#             */
/*   Updated: 2025/08/13 10:24:30 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include <iostream>
# include <stdlib.h>
# include "Weapon.class.hpp"

class HumanA
{
private:
	std::string AName;
	Weapon	&TypeWeapon;
public:
	void	attack(void);
	HumanA(std::string Name, Weapon &WeapName);
	~HumanA();
};

#endif