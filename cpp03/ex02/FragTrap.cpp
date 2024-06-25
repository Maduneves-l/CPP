/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:10:23 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 11:30:53 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    _name = "";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << BLUE << "FragTrap constructor called!" << RST << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << BLUE << "FragTrap " << name << " constructor called!" << RST << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(){
    std::cout << BLUE << "FragTrap copy constructor called!" << RST << std::endl;
    *this = copy;
}

FragTrap::~FragTrap(){
    std::cout << BLUE << "FragTrap destructor called!" << RST << std::endl;
}   

FragTrap &FragTrap::operator=(const FragTrap &copy){
    std::cout << BLUE << "FragTrap assignation operator called!" << RST << std::endl;

    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void FragTrap::highFivesGuys(){
    std::cout << BLUE << "FragTrap " << _name << " is asking for a high five!" << RST << std::endl;
}
