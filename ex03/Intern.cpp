/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:21:27 by justindaly        #+#    #+#             */
/*   Updated: 2024/05/23 18:25:03 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Constructors
Intern::Intern() 
{
    std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::Intern(Intern const &other) 
{
    (void)other;
    std::cout << "Intern Copy Constructor Called" << std::endl;
}

// Destructor
Intern::~Intern() 
{
    std::cout << "Intern Destructor Called" << std::endl;
}

// Assignment Operator
Intern &Intern::operator=(Intern const &rhs) 
{
    (void)rhs;
    std::cout << "Intern Assignment Operator Called" << std::endl;
    return *this;
}

AForm* Intern::makeForm(std::string const formName, std::string const target)
{
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*funcs[3])(std::string const target) = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

    for (int i = 0; i < 3; i++)
    {
        if (formNames[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*funcs[i])(target);
        }
    }
    std::cout << "Error: Invalid form type." << std::endl;
    return NULL;
}

AForm* Intern::makeShrubberyCreationForm(std::string const target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyRequestForm(std::string const target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidentialPardonForm(std::string const target)
{
    return new PresidentialPardonForm(target);
}
