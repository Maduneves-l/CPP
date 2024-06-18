/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:56:37 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/14 22:00:04 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& ref = str;

    std::cout << "Address of the string: " << &str << std::endl;
    std::cout << "Address of the string using pointer: " << ptr << std::endl;
    std::cout << "Address of the string using reference: " << &ref << std::endl;

    std::cout << "Value of the string: " << str << std::endl;
    std::cout << "Value of the string using pointer: " << *ptr << std::endl;
    std::cout << "Value of the string using reference: " << ref << std::endl;
}