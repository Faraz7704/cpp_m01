/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:46:03 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 16:10:09 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon gun = Weapon("Pistol");
    HumanA faraz("Faraz", gun);
    faraz.attack();
    gun.setType("Refile");
    faraz.attack();
    
    Weapon melee = Weapon("Axe");
    HumanB sam("Sam");
    sam.setWeapon(melee);
    sam.attack();
    melee.setType("Chicken");
    sam.attack();
    return (EXIT_SUCCESS);
}