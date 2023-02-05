/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:26:50 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 15:42:46 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void) const
{
    if (this->_weapon.getType() != "")
    {
        std::cout << _name << " attacked with " << this->_weapon.getType() << std::endl;
    }
    else
    {
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    }
}