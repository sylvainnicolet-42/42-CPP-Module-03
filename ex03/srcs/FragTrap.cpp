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

FragTrap::FragTrap(): ClapTrap() {
	this->_hitPoints = _hitPointsConst;
	this->_energyPoints = _energyPointsConst;
	this->_attackDamage = _attackDamageConst;
	std::cout << "Default FragTrap " << this->_name << " is born! 🐣" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->_hitPoints = _hitPointsConst;
	this->_energyPoints = _energyPointsConst;
	this->_attackDamage = _attackDamageConst;
	std::cout << "FragTrap " << this->_name << " is born! 🐣" << std::endl;
}

FragTrap::FragTrap(const FragTrap &scavTrap): ClapTrap(scavTrap) {
	std::cout << "FragTrap " << scavTrap._name << " is copied! 🐑" << std::endl;
	*this = scavTrap;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " is destroyed! ☠️" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "FragTrap assignation operator called from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys() {
	if (this->_energyPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->_hitPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " says: \"Give me a high five!\" 🖐️" << std::endl;
	this->_energyPoints--;
}