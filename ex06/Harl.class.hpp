/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 12:52:41 by qumiraud          #+#    #+#             */
/*   Updated: 2025/09/10 13:17:03 by qumiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
# define HARL_CLASS_HPP
# include <iostream>
# include <stdlib.h>

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

#endif
