/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:10:43 by justindaly        #+#    #+#             */
/*   Updated: 2024/05/23 17:19:53 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other) : AForm(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &rhs)
		AForm::operator=(rhs);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

void RobotomyRequestForm::executeAction(Bureaucrat const& executor) const
{
    std::cout << "* Drilling noises *" << std::endl;
    
    // Seed the random number generator
    std::srand(std::time(0)); 

    if (std::rand() % 2 == 0) {
        std::cout << _target << " has been robotomized successfully by " << executor.getName() << std::endl;
    } else {
        std::cout << "Robotomy by " << executor.getName() << " failed on " << _target << std::endl;
    }
}
