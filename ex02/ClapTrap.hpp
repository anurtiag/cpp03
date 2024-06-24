/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:52:51 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/20 15:18:25 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>



class ClapTrap
{
    protected:
    std::string name;
    int         Hit_points;
    int         Energy_points;
    int         Attack_damage;
    public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &source);
    ClapTrap operator=(const ClapTrap &source);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string get_name();
};


#endif