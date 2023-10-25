/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:06:30 by fkhan             #+#    #+#             */
/*   Updated: 2023/10/25 15:06:24 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename) : _inFile(filename)
{
    this->_outFile = this->_inFile + ".replace";
}

Sed::~Sed (void)
{

}

void    Sed::replace(std::string toFind, std::string replace)
{
    if (toFind.empty())
        return ;
    std::ifstream   ifs(this->_inFile.c_str());
    if (ifs.is_open())
    {
        std::string content;
        if (std::getline(ifs, content, '\0'))
        {
            std::ofstream   ofs(this->_outFile.c_str());
            size_t          pos = content.find(toFind);
            while (pos != std::string::npos)
            {
                content.erase(pos, toFind.length());
                content.insert(pos, replace);
                pos = content.find(toFind, pos + 1);
            }
            ofs << content;
            ofs.close();
        }
        else
        {
            std::cerr << "Empty file found." << std::endl;
        }
        ifs.close();
    }
    else
    {
        std::cerr << "Unable to open the file." << std::endl;
    }
}