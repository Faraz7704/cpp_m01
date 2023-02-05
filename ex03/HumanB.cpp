/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:26:47 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 15:57:00 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void) const
{
    if (this->_weapon != NULL && this->_weapon->getType() != "")
    {
        std::cout << _name << " attacked with " << this->_weapon->getType() << std::endl;
    }
    else
    {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}