/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:52:17 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/14 21:52:25 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie* horde = zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
        horde[i].announce();
    delete [] horde;
    return 0;
}