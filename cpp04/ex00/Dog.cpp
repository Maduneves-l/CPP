/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:33:00 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:34:46 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
    type = "Dog";
    std::cout << GREEN << "Dog Default constructor called" << RST << std::endl;
}

Dog::Dog(Dog const & src) {
    std::cout << GREEN << "Dog Copy constructor called" << RST << std::endl;
    *this = src;
}

Dog& Dog::operator=(Dog const & src) {
    std::cout << GREEN << "Dog Assignation operator called" << RST << std::endl;
    type = src.type;
    return *this;
}

Dog::~Dog(void) {
    std::cout << GREEN << "Dog Destructor called" << RST << std::endl;
}

void Dog::makeSound(void) const {
    std::cout << GREEN << "AUAU AUAU" << RST << std::endl;
}
