/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:06:50 by jdaly             #+#    #+#             */
/*   Updated: 2024/04/30 19:38:35 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Form
{
private:
    const std::string	_name;				//must be const
    bool         		_signed;			//not signed at start
    const int           _gradeToSign;       //grade required to sign
    const int           _gradeToExecute;    //grade required to execute
	
	Form();							//constructor

public:
	Form(const std::string& name, int gradeToSign, int gradeToExecutee); //constructor with input
    Form(Form const& other);    		//copy constructor
    ~Form();                         			//destructor
    Form& operator=(Form const& rhs); 	//copy assignment
    
    std::string	getName() const;
    bool        getSigned() const;
    int			getGrade() const;
    void        beSigned(Bureaucrat b1);
    void        signForm(Bureaucrat b1);

	/* Exception Classes */
	class GradeTooHighException : public std::exception
    {
        public:
			const char* what() const throw()
			{
				return "Form grade too high";
			}
    };
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Form grade too low";
			}
	};
};

std::ostream&	operator<<(std::ostream& o, const Form& rhs);