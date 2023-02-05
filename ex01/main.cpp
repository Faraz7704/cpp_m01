/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:08:16 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 15:10:05 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main() {
	int size = 3;

	Zombie* zombies = zombieHorde(size, "Faraz");
	for (int i = 0; i < size; i++)
	{
        zombies[i].announce();
    }
	delete [] zombies;
	return (EXIT_SUCCESS);
}