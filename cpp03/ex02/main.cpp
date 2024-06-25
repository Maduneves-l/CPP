/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:52:46 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 11:33:36 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    ClapTrap clap("Harry Potter");
    ScavTrap scav("Hermione Granger");
    FragTrap frag("Ron Weasley");

    clap.attack("Voldemort");
    scav.attack("Draco Malfoy");
    frag.attack("Bellatrix Lestrange");

    scav.guardGate();
    scav.guardGate();
    frag.highFivesGuys();
   
}