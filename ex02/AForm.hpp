/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:06:50 by jdaly             #+#    #+#             */
/*   Updated: 2024/05/23 16:41:15 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string	_name;				//must be const
    bool         		_signed;			//not signed at start
    const int           _gradeToSign;       //grade required to sign
    const int           _gradeToExecute;    //grade required to execute
	
protected:
	AForm();							//constructor

public:
	AForm(const std::string& name, int gradeToSign, int gradeToExecute); //constructor with input
    AForm(AForm const& other);    		//copy constructor
    virtual ~AForm();                         			//destructor
    AForm& operator=(AForm const& rhs); 	//copy assignment
    
    std::string	getName() const;
    bool        	getSigned() const;
    int				getGradeToSign() const;
	int				getGradeToExecute() const;
    void			beSigned(const Bureaucrat& b1);
	void			execute(Bureaucrat const& executor) const; 			//function to check grades prior to action
	virtual void	executeAction(Bureaucrat const& executor) const = 0; //pure virtual function for specific action
    
	/* Exception Classes */
	class GradeTooHighException : public std::exception
    {
        public:
			const char* what() const throw()
			{
				return "grade is too high";
			}
    };
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "grade is too low";
			}
	};
	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "form is not signed";
			}
	};
};

std::ostream&	operator<<(std::ostream& o, const AForm& rhs);

#endif