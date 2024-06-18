/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:26:51 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/18 10:32:44 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    Harl harl;
    
    std::cout << PURPLE;
    harl.complain("DEBUG");
    std::cout << RED;
    harl.complain("debug");
    
    std::cout << PURPLE;
    harl.complain("INFO");
    std::cout << RED;
    harl.complain("info");

    std::cout << PURPLE;
    harl.complain("WARNING");
    std::cout << RED;
    harl.complain("warning");

    std::cout << PURPLE;
    harl.complain("ERROR");
    std::cout << RED;
    harl.complain("error");

    return 0;

}