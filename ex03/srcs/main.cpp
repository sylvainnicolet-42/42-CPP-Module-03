/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:45:30 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 13:45:32 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.class.hpp"


int main(void) {
	std::cout << "---- CONSTRUCTORS ----" << std::endl;
	DiamondTrap bulbizar("Bulbizar");
	DiamondTrap pikachu;

	std::cout << std::endl << "---- VALID ACTIONS ----" << std::endl;
	bulbizar.whoAmI();
	bulbizar.attack("Carapuce");
	pikachu.whoAmI();

	std::cout << std::endl << "---- INVALID ACTIONS ----" << std::endl;
	bulbizar.takeDamage(1000);
	bulbizar.attack("Carapuce");

	for (int i = 0; i < 51; i++) {
		pikachu.attack("Carapuce");
	}

	std::cout << std::endl << "---- DESTRUCTORS ----" << std::endl;
	return 0;
}
