/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:52:29 by anurtiag          #+#    #+#             */
/*   Updated: 2024/06/19 12:21:53 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("putuka");
    
    for(int i = 0; i < 20; i++)
        a.attack("putuka");
    b.takeDamage(0);
    return(0);
}
