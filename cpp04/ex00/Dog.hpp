/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:32:11 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:32:22 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
    
    public:
        Dog(void);
        Dog(Dog const & src);
        Dog& operator=(Dog const & src);
        virtual ~Dog( void );

    virtual void makeSound(void) const;
};

#endif