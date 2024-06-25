/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:10:31 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/25 11:29:49 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

# define BLUE "\033[1;34m"

class FragTrap : public ClapTrap{
    
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & other);
        ~FragTrap();
        FragTrap & operator=(const FragTrap & other);
        void highFivesGuys(void);
        
};

#endif