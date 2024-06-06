/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:52:24 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/06 16:31:11 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void the_menu(){
    std::cout << YELLOW << "┌──────────────────────┐" << RM << std::endl;
    std::cout << YELLOW << "│      PHONEBOOK       │" << RM << std::endl;
    std::cout << YELLOW << "├──────────────────────┤" << RM << std::endl;
    std::cout << YELLOW << "│  1. ADD              │" << RM <<  std::endl;
    std::cout << YELLOW << "│  2. SEARCH           │" << RM <<  std::endl;
    std::cout << YELLOW << "│  3. EXIT             │" << RM <<  std::endl;
    std::cout << YELLOW << "└──────────────────────┘" << RM <<  std::endl;
    std::cout << YELLOW << "Enter your choice: " << RM;
}

std::string normalizeSpacesAndTabs(const std::string& input) {
    std::string output;
    bool lastWasSpace = false;

    for (size_t i = 0; i < input.length(); i++) {
        if (input[i] == '\t' || input[i] == ' ') {
            if (!lastWasSpace) {
                output += ' ';
                lastWasSpace = true;
            }
        } else {
            output += input[i];
            lastWasSpace = false;
        }
    }
    return output;
}

bool is_number(const std::string& str)
{
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (std::isdigit(*it) == 0) return false;
    }
    return true;
}

void    add_contact(int i, PhoneBook *phonebook)
{
    phonebook->getContact(i).setContact(1);
    phonebook->getContact(i).setContact(2);
    phonebook->getContact(i).setContact(3);
    phonebook->getContact(i).setContact(4);
    phonebook->getContact(i).setContact(5);
}

//show the table with info an then ask for the index
void   search_contact(int i, PhoneBook *phonebook)
{
    static int tmp;
    int cases = 0;

    if(i == 8)
        tmp = 8;
    if(tmp == 8)
        i = 8;
    
    std::cout << PURPLE << "+--------------------------------------------+" << RM << std::endl;
	std::cout << PURPLE <<  "|     index|first name| last name|  nickname|" <<  std::endl;
    
    for(int j = 0; j < i; j++)
    {
        
        std::cout << "|" << std::setw(10) << j << "|";
        std::string firstName = normalizeSpacesAndTabs(phonebook->getContact(j).getInfo(1));
        if (phonebook->getContact(j).getInfo(1).size() > 10)
            std::cout << std::setw(9) << firstName.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << firstName << "|";
        std::string lastName = normalizeSpacesAndTabs(phonebook->getContact(j).getInfo(2));
        if (phonebook->getContact(j).getInfo(2).size() > 10)
            std::cout << std::setw(9) << lastName.substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << lastName << "|";
        std::string nick = normalizeSpacesAndTabs(phonebook->getContact(j).getInfo(4));
        if (phonebook->getContact(j).getInfo(4).size() > 10)
            std::cout << std::setw(9) << nick.substr(0, 9) << ".|" << std::endl;
        else
            std::cout << std::setw(10) << nick << "|" << std::endl;
        std::cout << std::endl;
        cases = j;
    }
    std::cout << "+-------------------------------------------+" << std::endl;
    
    std::string command;
    std::cout << BLUE << "Type an index: " << RM;
    std::getline(std::cin, command);
    if (std::cin.eof()) {
        std::cout << RED << "\n Exiting program \n" << RM << std::endl;
        exit(0);
    }

    if ((is_number(command) && atoi(command.c_str()) >= 0 && atoi(command.c_str()) <= 7) && atoi(command.c_str()) <= cases && !command.empty())
        phonebook->getContact(atoi(command.c_str())).showInfo();
    else
        std::cout << RED << "Invalid index!" << RM << std::endl; 

}

int main(void)
{
    PhoneBook phonebook;
    std::string command;
    int i = 0;
    
    while(1)
    {
        the_menu();
        std::getline(std::cin, command);
        if (std::cin.eof())
        {
            std::cout << RED << "\n Exiting program \n" << RM << std::endl;
            return 0;
        }
        if (command != "ADD" && command != "SEARCH" && command != "EXIT")
            std::cout << RED << "\n Invalid argument" << RM << std::endl;
        if (command == "ADD")
        {
            if (i > 7)
                i = 0;
            add_contact(i, &phonebook);
            i++;
            std::cout << GREEN << "Press enter to continue!" << RM << std::endl; 
			std::cin.ignore(1, '\n');
			system("clear");
        }
        if (command == "SEARCH" && i > 0)
        {
            search_contact(i, &phonebook);
            std::cout << GREEN << "\nPress enter to continue!" << RM << std::endl; 
			std::cin.ignore(1, '\n');
			system("clear");
        }
        if (command == "EXIT")
            return 0; 
    }
}