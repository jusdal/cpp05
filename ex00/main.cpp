/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/02/28 17:29:03 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    test1()
{
    try
    {
        Bureaucrat bureaucrat1("bo", 1);

		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.incGrade();
		bureaucrat1.decGrade();
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int	main()
{
	test1();
	return (0);
}