/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:52:19 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/24 12:33:35 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    name = "Diamond";
    ClapTrap::name = name + "_clap_name";
    Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) , name (name)
{
    std::cout << "DiamondTrap name assignment constructor called" << std::endl;
    Attack_damage = 30;
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
    name = source.name;
    Attack_damage = source.Attack_damage;
    Energy_points = source.Energy_points;
    Hit_points = source.Hit_points;
    name = source.name;
    return(*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << this->name << " " << ClapTrap::name << std::endl;
}
