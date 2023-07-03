/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:40:40 by synicole          #+#    #+#             */
/*   Updated: 2023/06/30 13:40:42 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap(); // Default constructor
		~FragTrap(); // Destructor

		FragTrap(std::string name);

		void	highFivesGuys(void);
	private:
};

#endif