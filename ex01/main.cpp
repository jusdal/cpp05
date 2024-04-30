/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/04/30 18:56:09 by jdaly            ###   ########.fr       */
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
        std::cout << bureaucrat1.getName() << "'s grade after is: " << bureaucrat1.getGrade() << std::endl;
		bureaucrat1.decGrade();
        std::cout << bureaucrat1.getName() << "'s grade after is: " << bureaucrat1.getGrade() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    test2()
{
    try
    {
        Bureaucrat bureaucrat1("bo", 100);

		std::cout << bureaucrat1 << std::endl;
std::cout << bureaucrat1.getName() << "'s grade after is: " << bureaucrat1.getGrade() << std::endl;std::cout << bureaucrat1.getName() << "'s grade after is: " << bureaucrat1.getGrade() << std::endl;
		bureaucrat1.incGrade();
        std::cout << bureaucrat1.getName() << "'s grade after is: " << bureaucrat1.getGrade() << std::endl;
		bureaucrat1.decGrade();
        std::cout << bureaucrat1.getName() << "'s grade after is: " << bureaucrat1.getGrade() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int	main()
{
	test1();
    test2();
	return (0);
}