/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:39:46 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 10:40:58 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# define RED    "\033[31m"
# define RST   "\033[0m"

class WrongCat : public WrongAnimal {
    
    public:
        WrongCat(void);
        WrongCat(WrongCat const & src);
        WrongCat& operator=(WrongCat const & src);
        ~WrongCat( void );

    void makeSound(void) const;
};

#endif