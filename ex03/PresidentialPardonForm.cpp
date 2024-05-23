/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:21:28 by justindaly        #+#    #+#             */
/*   Updated: 2024/05/23 17:28:43 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Constructors, destructor, assignment operator
PresidentialPardonForm::PresidentialPardonForm(const std::string& target) 
    : AForm("Presidential Pardon Form", 25, 5), _target(target) 
{
    std::cout << "PresidentialPardonForm constructor called." << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other) : AForm(other), _target(other._target)
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &rhs)
		AForm::operator=(rhs);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void PresidentialPardonForm::executeAction(Bureaucrat const& executor) const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox, thanks to " << executor.getName() << "." << std::endl;
}
