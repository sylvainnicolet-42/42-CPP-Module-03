/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:47:02 by synicole          #+#    #+#             */
/*   Updated: 2023/07/11 11:47:04 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_CLASS_HPP
# define DIAMONDTRAP_CLASS_HPP

#include <iostream>
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(); // Default constructor
		DiamondTrap(const DiamondTrap &fragTrap); // Copy constructor
		DiamondTrap &operator=(const DiamondTrap &rhs); // Copy assignment operator
		~DiamondTrap(); // Destructor

		DiamondTrap(std::string name);

		void	attack(const std::string &target);
		void	whoAmI();
	private:
		std::string	_name;
};

#endif