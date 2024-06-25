/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:59:01 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 10:04:16 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap();
	ClapTrap a("Voldemort");
	
	for (int i = 0; i < 8; i++)
	{
		std::cout << i + 1 << ". ";
		a.attack("Harry_Potter");
	}
	a.beRepaired(2);
	a.beRepaired(30);
	a.beRepaired(4); // out of energy
	a.beRepaired(10);
	a.attack("no_energy");
}