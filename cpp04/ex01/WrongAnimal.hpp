/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:35:56 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:37:04 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

# define RED    "\033[31m"
# define RST   "\033[0m"

class WrongAnimal {
    
    protected:
        std::string type;

    public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const & src);
    WrongAnimal & operator=(WrongAnimal const & src);
    virtual ~WrongAnimal( void );

    std::string	getType( void ) const ;
    void makeSound(void) const;
};

#endif