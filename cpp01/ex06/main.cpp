/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:10:22 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/18 12:12:21 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    
    if(ac != 2){
        std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return 1;
    }

    Harl harl;
    harl.complain(av[1]);
    
    return 0;
}