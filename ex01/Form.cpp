/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:13:28 by jdaly             #+#    #+#             */
/*   Updated: 2024/05/01 18:26:53 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called." << std::endl;
    
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
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
        _signed = rhs.getSigned();
    return (*this);
}

std::string Form::getName() const
{
    return (_name);
}

int Form::getGradeToSign() const
{
    return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void	Form::beSigned(const Bureaucrat& b1)
{
	if (b1.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << "-------- FORM INFO --------" << std::endl;
	o << "Form Name: " << rhs.getName() << std::endl;
	o << "Grade to Sign: " << rhs.getGradeToSign() << std::endl;
	o << "Grade to Execute: " << rhs.getGradeToExecute() << std::endl;
	return o;
}