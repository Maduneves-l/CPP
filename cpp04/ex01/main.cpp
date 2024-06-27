/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:20:18 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:30:58 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void){
    
    Dog dog;
    Dog tmp;

    tmp = dog;
    
    tmp.setIdea("I'm a dog", 0);
    std::cout << tmp.getIdea(0) << std::endl;

    dog.setIdea("I want food", 0);
    std::cout << dog.getIdea(0) << std::endl;

    const Animal* animals[10];
    for (int i = 0; i < 5; i++){
        animals[i] = new Dog();
        std::cout << i << "- ";
        animals[i]->makeSound();
    }
    for (int i = 5; i < 10; i++){
        animals[i] = new Cat();
        std::cout << i << "- ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < 10; i++)
        delete animals[i];

    return 0;
}