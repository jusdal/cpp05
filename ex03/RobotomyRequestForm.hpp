/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:08:12 by justindaly        #+#    #+#             */
/*   Updated: 2024/05/23 17:10:39 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
	
	protected:
		RobotomyRequestForm(); //constructor

	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(RobotomyRequestForm const& other);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);

		void		executeAction(Bureaucrat const& executor) const;
		std::string	getTarget() const;
};

#endif