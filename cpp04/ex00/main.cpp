/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:43:15 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:52:48 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void ) {
	{
	const Animal* meta = new Animal();
	std::cout << YELLOW << "Type of animal is: " << meta->getType() << RST << std::endl;
	meta->makeSound(); // output no sound

	const Animal* j = new Dog();
	std::cout << GREEN << "Type of animal is: " << j->getType() << RST << std::endl;
	j->makeSound(); // output dog sound!

	const Animal* i = new Cat();
	std::cout << CYAN << "Type of animal is: " << i->getType() << RST << std::endl;
	i->makeSound(); //will output the cat sound!

	delete i;
	delete j;
	delete meta;
	}
	const WrongAnimal* wrong = new WrongAnimal();
	std::cout << RED << "Type of animal is: " << wrong->getType() << RST << std::endl;
	wrong->makeSound();

	const WrongAnimal* x = new WrongCat();
	std::cout << RED << "Type of animal is: " << x->getType() << RST << std::endl;
	x->makeSound();

	const WrongCat* cat = new WrongCat();
	std::cout << BLUE <<  "Type of animal is: " << cat->getType() << std::endl;
	cat->makeSound();

	delete cat;
	delete x;
	delete wrong;
}