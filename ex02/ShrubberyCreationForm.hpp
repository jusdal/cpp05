/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:14:53 by justindaly        #+#    #+#             */
/*   Updated: 2024/05/22 17:56:01 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	
	protected:
		ShrubberyCreationForm(); //constructor

	public:
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

		void		execute(Bureaucrat const& executor) const;
		std::string	getTarget() const;
};

#endif