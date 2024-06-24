/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:52:29 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/20 15:50:03 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a;
    ScavTrap b("boniato");
    ScavTrap c;
    c = b;
    std::cout << "hi my name is " << c.get_name();
    // a.attack("putuka");
    // a.guardGate();
    return(0);
}
