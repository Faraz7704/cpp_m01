/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:07:02 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 16:07:38 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    Sed(std::string filename);
    ~Sed();

    void    replace(std::string s1, std::string s2);
};

#endif