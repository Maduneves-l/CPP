/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:00:41 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:49:37 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & src) {
    std::cout << "Brain Copy constructor called" << std::endl;
    *this = src;
}

Brain& Brain::operator=(Brain const & src) {
    std::cout << "Brain Assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
    return *this;
}

Brain::~Brain(void) {
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(std::string idea, int index) {
    if (index >= 100 || index < 0)
        return ;
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    if (index >= 100 || index < 0)
        return "I don't have that many ideas!";
    return this->ideas[index];
}