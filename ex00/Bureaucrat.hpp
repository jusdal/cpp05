/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:09:53 by jdaly             #+#    #+#             */
/*   Updated: 2024/01/26 15:59:29 by jdaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
    class BureaucratException
    {
        //write exception code here
    };
private:
    std::string _name; //must be const
    int         _grade; //must be 1-150

public:
    Bureaucrat();                           //constructor
    Bureaucrat(Bureaucrat const& other);    //copy constructor
    ~Bureaucrat();                          //destructor
    Bureaucrat& operator=(Bureaucrat const& rhs); //copy assignment
    
    std::string getName() const;
    int getGrade() const;
    void incGrade();
    void decGrade();
};

#endif