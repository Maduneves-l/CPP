/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:25:36 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 11:32:13 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    _status = false;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << PURPLE << "ScavTrap constructor called!" << RST << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    _status = false;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << PURPLE << "ScavTrap " << name << " constructor called!" << RST << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(){
    std::cout << PURPLE << "ScavTrap copy constructor called!" << RST << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap(){
    std::cout << PURPLE << "ScavTrap destructor called!" << RST << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    std::cout << PURPLE << "ScavTrap assignation operator called!" << RST << std::endl;

    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void ScavTrap::guardGate(){
    if (_status == false){
        std::cout << PURPLE << "ScavTrap has entered in Gate keeper mode!" << RST << std::endl;
        _status = true;
        
    }
    else
        std::cout << PURPLE << "ScavTrap is alreafy in Gate keeper mode!" << RST << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (this->_energyPoints < 1){
        std::cout << PURPLE << "ScavTrap " << _name << " energy points is " << this->_energyPoints << ", can't attack!" << RST << std::endl;
        return ;
    }
    std::cout << PURPLE << "ScavTrap " << _name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RST << std::endl;
    takeDamage(this->_attackDamage);
    this->_energyPoints--;
}
