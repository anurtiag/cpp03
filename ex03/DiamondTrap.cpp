/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:52:19 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/24 16:34:15 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->name = "Patata diamante";
    ClapTrap::name = name + "_clap_name";
    this->Attack_damage = FragTrap::Attack_damage;
    this->Energy_points = ScavTrap::Energy_points;
    this->Hit_points = FragTrap::Hit_points;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) , name (name)
{
    std::cout << "DiamondTrap name assignment called" << std::endl;
    this->name = name;
    this->Attack_damage = FragTrap::Attack_damage;
    this->Energy_points = ScavTrap::Energy_points;
    this->Hit_points = FragTrap::Hit_points;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &source) : ClapTrap(source), FragTrap(source), ScavTrap(source)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    this->name = "source.name";
}

DiamondTrap DiamondTrap::operator=(DiamondTrap &source)
{
    std::cout << "DiamondTrap copy operator called" << std::endl;
    this->name = source.name;
    this->Attack_damage = source.Attack_damage;
    this->Energy_points = source.Energy_points;
    this->Hit_points = source.Hit_points;
    this->name = source.name;
    return(*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << this->name << " " << ClapTrap::name << std::endl;
}
