/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:06:29 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/10 12:44:17 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

class Harl
{
	private:
		typedef	void(Harl::*HarlFunc)();
		HarlFunc	_inventoryFunctions[4];
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
	public:
		static int	ask;
		void		complain(std::string level);
		Harl();
		~Harl();
};
