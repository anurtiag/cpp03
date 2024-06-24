/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:52:29 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/24 16:02:55 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap b;
    // DiamondTrap a(b);
    // DiamondTrap c;
    // c = b;
    b.whoAmI();
    b.get_energy();
    b.get_health();
    b.get_attack();
    // b.attack("patata");
    // b.takeDamage(30);
    // a(b);
    return(0);
}
