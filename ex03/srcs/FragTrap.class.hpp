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

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(); // Default constructor
		FragTrap(const FragTrap &fragTrap); // Copy constructor
		FragTrap &operator=(const FragTrap &rhs); // Copy assignment operator
		~FragTrap(); // Destructor

		FragTrap(std::string name);

		void	highFivesGuys();
	private:
};

#endif