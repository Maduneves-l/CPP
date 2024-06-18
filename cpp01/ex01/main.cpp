/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:52:17 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/18 15:55:55 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    int num = 5;
    Zombie* horde = zombieHorde(num, "Zombie");
    for (int i = 0; i < num; i++)
        horde[i].announce(); 
    delete [] horde;
    return 0;
}