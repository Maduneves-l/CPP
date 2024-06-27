/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:20:18 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:56:42 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void){
    
    //Animal animal = new Animal();
    
    Animal *dog = new Dog();
    dog->makeSound();
    delete dog;

    Dog au;
    au.makeSound();
    au.setIdea("I am a dog", 0);
    std::cout << au.getIdea(0) << std::endl;
    
    au.setIdea("I love bones", 1);
    std::cout << au.getIdea(1) << std::endl;

    Cat miau;
    miau.makeSound();
    miau.setIdea("I am a cat", 0);
    std::cout << miau.getIdea(0) << std::endl;
    
    miau.setIdea("I love fish", 1);
    std::cout << miau.getIdea(1) << std::endl;
}