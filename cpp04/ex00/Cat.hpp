/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:23:08 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:23:59 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
    
    public:
        Cat(void);
        Cat(Cat const & src);
        Cat& operator=(Cat const & src);
        virtual ~Cat( void );

    virtual void makeSound(void) const;
};

#endif