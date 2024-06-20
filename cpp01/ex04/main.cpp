/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 22:49:38 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/19 08:54:57 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if (from.empty())
        return;
    size_t start_pos = str.find(from);
    while(start_pos != std::string::npos) {
        str.erase(start_pos, from.size());
        str.insert(start_pos, to);
        start_pos = str.find(from, start_pos + to.size());
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