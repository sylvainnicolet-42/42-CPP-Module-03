/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <synicole@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:44:42 by synicole          #+#    #+#             */
/*   Updated: 2023/06/30 13:44:44 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default ScavTrap " << this->getName() << " is born! 🐣" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this->getName() << " is born! 🐣" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " is destroyed! ☠️" << std::endl;
}

void	ScavTrap::attack(std::string const &target) {
	if (this->getEnergyPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->getHitPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void	ScavTrap::guardGate() {
	if (this->getEnergyPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->getHitPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode." << std::endl;
}

