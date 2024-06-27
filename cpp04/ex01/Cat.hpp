/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:23:08 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:15:29 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(Cat const & src);
        Cat& operator=(Cat const & src);
        virtual ~Cat( void );

    virtual void makeSound(void) const;
    std::string getType(void) const;
    void setIdea(std::string idea, int i);
    std::string getIdea(int i) const;
};

#endif