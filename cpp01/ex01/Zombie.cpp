/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:47:50 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/14 21:51:55 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

void Zombie::setName(std::string name){ this->name = name; }

Zombie::~Zombie(){ std::cout << this->name << " is dead" << std::endl; }

void Zombie::announce(void){ std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }