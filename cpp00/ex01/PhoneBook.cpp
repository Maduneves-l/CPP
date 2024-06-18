/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:33:22 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/06 10:49:47 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//constructor
PhoneBook::PhoneBook(){}

PhoneBook::~PhoneBook(){}

//função que busca o contato na posição i
Contact &PhoneBook::getContact(int i)
{
	return (this->contacts[i]);
}

