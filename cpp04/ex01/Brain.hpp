/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneves-l <mneves-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:57:26 by mneves-l          #+#    #+#             */
/*   Updated: 2024/06/27 11:11:14 by mneves-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>


class Brain {
    protected:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(Brain const& src);
        Brain& operator=(Brain const & src);
        ~Brain(void);

        void setIdea(std::string idea, int index);
        std::string getIdea(int index) const;


};

#endif