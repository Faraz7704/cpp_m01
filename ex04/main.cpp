/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:58:48 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/25 14:58:54 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main (int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: ./main <filename> <to_find> <replace>" << std::endl;
        return (1);
    }
    else
    {
        Sed   sed(av[1]);
        sed.replace(av[2], av[3]);
    }
    return (0);
}
