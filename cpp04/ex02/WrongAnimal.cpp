/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:36:42 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:49:15 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    type = "WrongAnimal";
    std::cout << RED << "WrongAnimal Default constructor called" << RST << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
    std::cout << RED << "WrongAnimal Copy constructor called" << RST << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & src) {
    std::cout << RED << "WrongAnimal Assignation operator called" << RST << std::endl;
    type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << RED << "WrongAnimal Destructor called" << RST << std::endl;
}

void WrongAnimal::makeSound(void) const {
    std::cout << RED << "MOOOOOOO" << RST << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}
