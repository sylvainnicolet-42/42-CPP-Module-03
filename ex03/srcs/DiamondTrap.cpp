/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:47:08 by synicole          #+#    #+#             */
/*   Updated: 2023/07/11 11:47:10 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.class.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "Pikachu";
	this->_hitPoints = FragTrap::_hitPoints; // 100
	this->_energyPoints = ScavTrap::_energyPoints; // 50
	this->_attackDamage = FragTrap::_attackDamage; // 30
	std::cout << "Default DiamondTrap " << this->_name << " is born! 🐣" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(), FragTrap() {
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = ClapTrap::_hitPoints; // 100
	this->_energyPoints = ClapTrap::_energyPoints; // 50
	this->_attackDamage = ClapTrap::_attackDamage; // 30
	std::cout << "DiamondTrap " << this->_name << " is born! 🐣" << std::endl;
	std::cout << "hitPoints[100]: " << ScavTrap::_hitPoints << std::endl;
	std::cout << "energyPoints[50]: " << ScavTrap::_energyPoints << std::endl;
	std::cout << "attackDamage[30]: " << ScavTrap::_attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &scavTrap): ClapTrap(scavTrap) {
	std::cout << "DiamondTrap " << scavTrap._name << " is copied! 🐑" << std::endl;
	*this = scavTrap;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " is destroyed! ☠️" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout << "DiamondTrap assignation operator called from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	DiamondTrap::attack(std::string const &target) {
	ScavTrap::attack(target);
	this->_energyPoints -= 1;
}

void	DiamondTrap::whoAmI() {
	if (this->_energyPoints <= 0) {
		std::cout << "DiamondTrap " << this->_name << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->_hitPoints <= 0) {
		std::cout << "DiamondTrap " << this->_name << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
