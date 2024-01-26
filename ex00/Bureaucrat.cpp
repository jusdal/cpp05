/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:09:53 by jdaly             #+#    #+#             */
/*   Updated: 2024/01/26 16:19:14 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat constructor called." << std::endl;
    std::cout << "Please enter Bureaucrat Name: " << std::endl;
    std::cin >> _name;
    std::cout << "Please enter Bureaucrat Grade: " << std::endl;
    std::cin >> _grade;
    try
    {
        if (_grade < 1) // grade is < 1
        {
            throw 
        }
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name= rhs.getName();
        _grade = rhs.getGrade();
    }
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}