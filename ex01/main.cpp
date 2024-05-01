/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/05/01 18:16:04 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void    test1()
{
    try
    {
        Bureaucrat bureaucrat1("bo", 13);
		Form form1("form1", 10, 10);

		std::cout << bureaucrat1 << std::endl;

		bureaucrat1.signForm(form1);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int	main()
{
	test1();
    //test2();
	return (0);
}