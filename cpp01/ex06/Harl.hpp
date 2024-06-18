/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:33:57 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/18 10:35:57 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#define PURPLE "\033[1;35m"
#define RED "\033[1;31m"
#define RM "\033[0m"

class Harl{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level );
};

#endif