/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:41:09 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:42:54 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    type = "WrongCat";
    std::cout << RED << "WrongCat constructor called" << RST << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) {
    std::cout << RED << "WrongCat Copy constructor called" << RST << std::endl;
    *this = src;
}

WrongCat& WrongCat::operator=(WrongCat const & src) {
    std::cout << RED << "WrongCat Assignation operator called" << RST << std::endl;
    type = src.type;
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << RED << "WrongCat Destructor called" << RST << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << RED << "PIU PIU" << RST << std::endl;
}

