/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:09:53 by jdaly             #+#    #+#             */
/*   Updated: 2024/02/28 17:17:29 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
private:
    const std::string	_name;				//must be const
    int         		_grade;				//must be 1-150
	
	Bureaucrat();							//constructor

public:
	Bureaucrat(const std::string& name, int grade); //constructor with input
    Bureaucrat(Bureaucrat const& other);    		//copy constructor
    ~Bureaucrat();                         			//destructor
    Bureaucrat& operator=(Bureaucrat const& rhs); 	//copy assignment
    
    std::string	getName() const;
    int			getGrade() const;
    void		incGrade();
    void		decGrade();

	/* Exception Classes */
	class GradeTooHighException : public std::exception
    {
        public:
			const char* what() const throw()
			{
				return "Grade too high";
			}
    };
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Grade too low";
			}
	};
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif