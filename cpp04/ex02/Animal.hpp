/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 09:54:33 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:44:37 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RST   "\033[0m"
# define RED     "\033[31m"      
# define GREEN   "\033[32m"      
# define YELLOW  "\033[33m"      
# define BLUE    "\033[34m"      
# define MAGENTA "\033[35m"      
# define CYAN    "\033[36m"      
# define WHITE   "\033[37m" 

class Animal {
    
    protected:
        std::string type;

    public:
    Animal(void);
    Animal(Animal const & src);
    Animal & operator=(Animal const & src);
    virtual ~Animal( void );

    std::string	getType( void ) const ;
    virtual void makeSound(void) const = 0;
};

#endif