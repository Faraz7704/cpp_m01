/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkhan <fkhan@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:50:00 by fkhan             #+#    #+#             */
/*   Updated: 2023/02/05 18:53:44 by fkhan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Harl
{
private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

public:
    Harl();
    ~Harl();

    void    complain(std:: string level);

};

typedef void (Harl::*t_func) (void);