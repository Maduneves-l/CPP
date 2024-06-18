/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:01:32 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/14 21:27:18 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie test("Sem objeto temporário");
    test.announce();

    randomChump("Com objeto temporário");

    Zombie* z = newZombie("Com objeto dinâmico");
    z->announce();

    delete z;
}
