/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:13:28 by jdaly             #+#    #+#             */
/*   Updated: 2024/05/15 16:49:23 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called." << std::endl;
    
    if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const& other) : _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called." << std::endl;
}

AForm::~AForm()
{
    std::cout << "Form destructor called." << std::endl;
}

AForm& AForm::operator=(AForm const& rhs)
{
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &rhs)
        _signed = rhs.getSigned();
    return (*this);
}

std::string AForm::getName() const
{
    return (_name);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
    return (_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
    return (_gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat& b1)
{
	if (b1.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream& operator<<(std::ostream& o, const AForm& rhs)
{
	o << "-------- FORM INFO --------" << std::endl;
	o << "Form Name: " << rhs.getName() << std::endl;
	o << "Form Signed: " << rhs.getSigned() << std::endl;
	o << "Grade to Sign: " << rhs.getGradeToSign() << std::endl;
	o << "Grade to Execute: " << rhs.getGradeToExecute() << std::endl;
	return o;
}

void	AForm::execute(Bureaucrat const & executor) const {
    if (!this->getSigned()) {
        throw FormNotSignedException(); 
    }
    if (executor.getGrade() > this->getGradeToExecute()) {
        throw GradeTooLowException(); 
    }
    this->executeAction(executor);
}