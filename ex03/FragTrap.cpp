/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:07:02 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/24 13:34:26 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->Attack_damage = 30;
    this->Energy_points = 100;
    this->Hit_points = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name assignment called" << std::endl;
    this->Attack_damage = 30;
    this->Energy_points = 100;
    this->Hit_points = 100;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    this->name = "source.name";
}

FragTrap FragTrap::operator=(const FragTrap &source)
{
    std::cout << "FragTrap copy operator called" << std::endl;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    this->name = source.name;
    return(*this);
}

void FragTrap::highFives()
{
    std::cout << "hey! give me that highfives!";
}