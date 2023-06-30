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

#include "ClapTrap.class.hpp"

int main(void) {
	std::cout << "---- CONSTRUCTORS ----" << std::endl;
	ClapTrap bulbizar("Bulbizar");
	ClapTrap salameche("Salamèche");
	ClapTrap carapuce("Carapuce");
	ClapTrap mew("Mew");
	ClapTrap pikachu;
	ClapTrap mewTwo(mew);
	ClapTrap mewThree = carapuce;

	std::cout << std::endl << "---- VALID ACTIONS ----" << std::endl;
	bulbizar.attack("Salamèche");
	salameche.takeDamage(2);
	carapuce.beRepaired(1);

	std::cout << std::endl << "---- INVALID ACTIONS ----" << std::endl;
	bulbizar.takeDamage(10);
	bulbizar.beRepaired(10);
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");
	salameche.attack("Bulbizar");

	std::cout << std::endl << "---- DESTRUCTORS ----" << std::endl;
	return 0;
}
