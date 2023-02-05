/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:08:16 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 15:43:31 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);

void	randomChump(std::string name);

int	main()
{
	Zombie* zombie = newZombie("Sam");
	zombie->announce();
	delete zombie;
	randomChump("Faraz");
	return (EXIT_SUCCESS);
}