/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:10:11 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/06 10:48:46 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#define YELLOW "\033[33m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define PURPLE "\033[1;35m"
#define RM "\033[0m"
#define BLUE "\033[1;34m"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        int         phone;
        std::string nick;
        std::string dark_secret;
    public:
        Contact();
        ~Contact();
        void setContact(int type);
        std::string getInfo(int type);
        void showInfo(void);
        bool isNumber(const std::string& str);
};









#endif