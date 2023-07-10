/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:58:32 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 17:58:34 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(): _name("Pikachu"),_hitPoints(10),_energyPoints(10),_attackDamage(0) {
	std::cout << "Default ClapTrap " << this->_name << " is born! 🐣" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " is born! 🐣" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << "ClapTrap " << clapTrap._name << " is copied! 🐑" << std::endl;
	*this = clapTrap;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " is destroyed! 💀" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! 🗡" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! 🩸" << std::endl;
	this->_hitPoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't do action, it has no more energy! 😴" << std::endl;
		return;
	} else if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " can't do action, it's dead! 💀" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points! ❤️" << std::endl;
	this->_energyPoints--;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "ClapTrap assignation operator called from " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}
