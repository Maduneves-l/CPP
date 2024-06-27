/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:24:14 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:27:13 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    type = "Cat";
    std::cout << CYAN << "Cat Default constructor called" << RST << std::endl;
}

Cat::Cat(Cat const & src) {
    std::cout << CYAN << "Cat Copy constructor called" << RST << std::endl;
    *this = src;
}

Cat& Cat::operator=(Cat const & src) {
    std::cout << CYAN << "Cat Assignation operator called" << RST << std::endl;
    type = src.type;
    return *this;
}

Cat::~Cat(void) {
    std::cout << CYAN << "Cat Destructor called" << RST << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << CYAN << "MIAU MIAU" << RST << std::endl;
}