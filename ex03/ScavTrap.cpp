/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:27:57 by kali              #+#    #+#             */
/*   Updated: 2024/06/20 16:13:20 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->Hit_points = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name assignment called" << std::endl;
    this->Attack_damage = 20;
    this->Energy_points = 50;
    this->Hit_points = 100;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    this->name = "source.name";
}

ScavTrap ScavTrap::operator=(const ScavTrap &source)
{
    std::cout << "ScavTrap copy operator called" << std::endl;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    this->name = source.name;
    return(*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now on gate Keeper mode!" << std::endl;
}