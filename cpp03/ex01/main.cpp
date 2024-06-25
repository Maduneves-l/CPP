/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:52:46 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 10:58:34 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ClapTrap clap("Harry Potter");
    clap.attack("Voldemort");
    clap.attack("Draco");

    ScavTrap scav("Mestre Yoda");
    scav.attack("Darth Vader");
    scav.guardGate();
    scav.guardGate();
    scav.attack("Anakin Skywalker");
}