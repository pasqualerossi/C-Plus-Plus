/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:19:36 by prossi            #+#    #+#             */
/*   Updated: 2022/07/26 17:22:22 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    void    set_name(std::string name);

    void    announce(void);

    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);

    private:

    std::string _name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif