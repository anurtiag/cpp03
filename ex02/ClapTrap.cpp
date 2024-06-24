/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:52:32 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/20 15:41:22 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->name = "Patata";
    this->Attack_damage = 0;
    this->Hit_points = 10;
    this->Energy_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap name assignment constructor called" << std::endl;
    this->name = name;
    this->Attack_damage = 0;
    this->Hit_points = 10;
    this->Energy_points = 10;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->name = source.name;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
}

ClapTrap ClapTrap::operator=(const ClapTrap &source)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->name = source.name;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points > 0)
    {
        this->Energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ",causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "No energy to do the action :(" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " had recieved" << amount << " of damage,";
    this->Hit_points -= amount;
    std::cout << "and his live is now " << this->Hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Energy_points > 0)
    {
        this->Hit_points += amount;
        this->Energy_points--;
    }
    else
        std::cout << "No energy to do the action :(" << std::endl;
}

std::string ClapTrap::get_name()
{
    return(this->name);
}