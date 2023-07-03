/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:42 by synicole          #+#    #+#             */
/*   Updated: 2023/06/30 13:44:44 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap() {
	std::cout << "Default FragTrap " << this->getName() << " is born! 🐣" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap " << this->getName() << " is born! 🐣" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->getName() << " is destroyed! ☠️" << std::endl;
}

void	FragTrap::highFivesGuys() {
	if (this->getEnergyPoints() <= 0) {
		std::cout << "FragTrap " << this->getName() << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->getHitPoints() <= 0) {
		std::cout << "FragTrap " << this->getName() << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->getName() << " is asking for high fives! 🙌" << std::endl;
}
