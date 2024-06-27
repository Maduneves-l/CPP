/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:24:14 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:15:09 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    type = "Cat";
    brain = new Brain();
    std::cout << CYAN << "Cat Default constructor called" << RST << std::endl;
}

Cat::Cat(Cat const & src) {
    std::cout << CYAN << "Cat Copy constructor called" << RST << std::endl;
    *this = src;
    brain = new Brain();
}

Cat& Cat::operator=(Cat const & src) {
    std::cout << CYAN << "Cat Assignation operator called" << RST << std::endl;
    type = src.type;
    
    return *this;
}

Cat::~Cat(void) {
    std::cout << CYAN << "Cat Destructor called" << RST << std::endl;
    delete brain;
}

void Cat::makeSound(void) const {
    std::cout << CYAN << "MIAU MIAU" << RST << std::endl;
}

std::string Cat::getType(void) const {
    return this->type;
}

void Cat::setIdea(std::string idea, int i) {
    this->brain->setIdea(idea, i);
}

std::string Cat::getIdea(int i) const {
    return this->brain->getIdea(i);
}