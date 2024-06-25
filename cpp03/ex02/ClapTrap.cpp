/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:40:02 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 10:22:19 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << CYAN << "ClapTrap constructor called!" << RST << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << CYAN << "ClapTrap " << name <<  " constructor called!" << RST << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << CYAN <<  "ClapTrap copy constructor called!" << RST << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << CYAN << "ClapTrap destructor called!" << RST <<  std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << CYAN << "ClapTrap assignation operator called!" << RST << std::endl;

    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->_energyPoints < 1) {
		std::cout << RED << "ClapTrap " << this->_name << " energy points is " << this->_energyPoints << ", can't attack!" << RST << std::endl;
		return ;
	}
	std::cout << YELLOW << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << RST << std::endl;
	takeDamage( this->_attackDamage );
	this->_energyPoints--;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints - amount > 0) {
		std::cout << this->_name << " took " << amount << " of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << "is already dead" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints < 1) {
		std::cout << RED << "ClapTrap " << this->_name << " energy points is " << this->_energyPoints << ", need more points to act!" << RST << std::endl;
		return ;
	}
	if (this->_hitPoints < 1) {
		std::cout << RED << "ClapTrap " << this->_name << "is already dead" << RST << std::endl;
		return ;
	}
	std::cout << GREEN << "ClapTrap " << this->_name << " just healed " << amount << RST << std::endl;
	this->_hitPoints+= amount;
	this->_energyPoints--;
}