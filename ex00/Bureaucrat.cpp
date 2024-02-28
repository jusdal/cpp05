/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:09:53 by jdaly             #+#    #+#             */
/*   Updated: 2024/02/28 17:44:00 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called." << std::endl;
    
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this != &rhs)
        _grade = rhs.getGrade();
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

void	Bureaucrat::decGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::incGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << "'s grade is: " << rhs.getGrade() << std::endl;
	return o;
}