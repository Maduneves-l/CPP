/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:51:15 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/06 10:26:30 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

bool  Contact:: isNumber(const std::string& str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (std::isdigit(*it) == 0) return false;
    }
    return true;
}

void Contact:: setContact(int type)
{
    std::string input;
    
   do {

        switch (type) {
        case 1:
            std::cout << PURPLE<< "Enter first name: " << RM;
            std::getline(std::cin, input);
            break;
        case 2:
            std::cout << PURPLE "Enter last name: " << RM;
            std::getline(std::cin, input);
            break;
        case 3:
            while(1)
            {
                std::cout << PURPLE "Enter phone number: " << RM;
                std::getline(std::cin, input);
                if (std::cin.eof()){
                    std::cout << RED << "\n Exiting program \n" << RM << std::endl;
                    exit(0);
                }
                atoi(input.c_str());
                if (input.size() < 9 || isNumber(input) == false){
                    std::cout << RED <<"Phone number must have 9 digits. Please try again." << RM << std::endl;
                    continue;
                }
                break;  
            }
            break;
        case 4:
            std::cout << PURPLE << "Enter nickname: " << RM;
            std::getline(std::cin, input);
            break;
        case 5:
            std::cout << PURPLE << "Enter dark secret: " << RM;
            std::getline(std::cin, input);
            break;
        default:
            break;
        }
        
        
        if (std::cin.eof())
        {
            std::cout << RED << "\n Exiting program \n" << RM << std::endl;
            exit(0);
        }

        if (input.empty()) 
            std::cout << RED << "Input cannot be empty. Please try again." << RM << std::endl;
    } while (input.empty());

    switch (type) {
    case 1:
        this->first_name = input;
        break;
    case 2:
        this->last_name = input;
        break;
    case 3:
        this->phone = atoi(input.c_str());
        break;
    case 4:
        this->nick = input;
        break;
    case 5:
        this->dark_secret = input;
        break;
    default:
        break;
    }
}

std::string Contact::getInfo(int type)
{
    switch (type) {
    case 1:
        return this->first_name;
    case 2:
        return this->last_name;
    case 3:
        return std::to_string(this->phone);
    case 4:
        return this->nick;
    case 5:
        return this->dark_secret;
    default:
        return "";
    }
}

void::Contact::showInfo(void)
{
    std::cout << "\n";
    std::cout << BLUE <<  "First name: " << this->first_name << RM << std::endl;
    std::cout << BLUE <<  "Last name: " << this->last_name << RM <<  std::endl;
    std::cout << BLUE <<  "Phone number: " << this->phone << RM <<  std::endl;
    std::cout << BLUE <<  "Nickname: " << this->nick << RM <<  std::endl;
    std::cout << BLUE <<  "Dark secret: " << this->dark_secret << RM <<  std::endl;
    
}
