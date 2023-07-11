/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:40:40 by synicole          #+#    #+#             */
/*   Updated: 2023/06/30 13:40:42 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(); // Default constructor
		ScavTrap(const ScavTrap &scavTrap); // Copy constructor
		ScavTrap &operator=(const ScavTrap &rhs); // Copy assignment operator
		~ScavTrap(); // Destructor

		ScavTrap(std::string name);

		void	attack(const std::string &target);
		void	guardGate();
};

#endif