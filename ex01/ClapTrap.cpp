/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:52:32 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/19 13:58:08 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->name = "Patata";
    this->Attack_damage = 0;
    this->Hit_points = 10;
    this->Energy_points = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name assigment constructor called" << std::endl;
    this->name = name;
    this->Attack_damage = 0;
    this->Hit_points = 10;
    this->Energy_points = 10;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = source.name;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
}

ClapTrap ClapTrap::operator=(const ClapTrap &source)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = source.name;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
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
    this->Hit_points -= amount;
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
