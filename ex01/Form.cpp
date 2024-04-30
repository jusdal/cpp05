/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:13:28 by jdaly             #+#    #+#             */
/*   Updated: 2024/04/30 19:37:20 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signed(false)
{
    std::cout << "Form constructor called." << std::endl;
    
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Form copy constructor called." << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor called." << std::endl;
}

Form& Form::operator=(Form const& rhs)
{
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &rhs)
        _grade = rhs.getGrade();
    return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getGrade() const
{
    return (_grade);
}

void	Form::beSigned(Bureaucrat b1)
{
	if (b1.getGrade() > 150)
		throw Form::GradeTooLowException();
	_signed = true;
    signForm(b1);
}

void	Form::signForm(Bureaucrat b1)
{
	std::cout << b1.getName() << " has signed " << getName() << std::endl;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName() << "'s grade is: " << rhs.getGrade() << std::endl;
	return o;
}