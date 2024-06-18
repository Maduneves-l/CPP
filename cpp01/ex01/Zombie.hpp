/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:32:28 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/14 21:52:46 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        void announce(void);
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif