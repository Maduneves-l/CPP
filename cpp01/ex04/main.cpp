/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 22:49:38 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/18 13:30:00 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
}

int main(int ac, char **av){
    if (ac != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    if (!av[2])
    {
        std::cout << "Missing file" << std::endl;
        return 1;
    }
    std::ifstream file(av[1]);
    if (!file.is_open())
    {
        std::cout << "Failed to open file" << std::endl;
        return 1;
    }
    std::istreambuf_iterator<char> start(file), end;
    std::string text(start, end);

    replaceAll(text, av[2], av[3]);
    
    std::string fileName = av[1];
	fileName.append(".replace");
	std::ofstream newFile(fileName.c_str());
	newFile << text;
	newFile.close();
    
}