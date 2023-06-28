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

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " is dead! 💀" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {

}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage! 🗡" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! 🩸" << std::endl;
	this->_hitPoints -= (int)amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points! ❤️" << std::endl;
	this->_energyPoints--;
}
