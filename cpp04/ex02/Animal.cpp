/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:11:46 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:57:36 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") {
    std::cout << YELLOW << "Animal Default constructor called" << RST << std::endl;
}

Animal::Animal(Animal const & src) {
    std::cout << YELLOW << "Animal Copy constructor called" << RST << std::endl;
    *this = src;
}

Animal& Animal::operator=(Animal const & src) {
    std::cout << YELLOW << "Animal Assignation operator called" << RST << std::endl;
    this->type = src.type;
    return *this;
}

Animal::~Animal(void) {
    std::cout << YELLOW << "Animal Destructor called" << RST << std::endl;
}


std::string Animal::getType(void) const {
    return this->type;
}
