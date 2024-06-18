/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 17:49:32 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/14 21:26:10 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){ this->name = name; }

Zombie::~Zombie(){ std::cout << this->name << " destroid!" << std::endl; }

void Zombie::announce(void){ std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl; }