/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:21:03 by justindaly        #+#    #+#             */
/*   Updated: 2024/08/06 14:03:40 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    const std::string _target;

protected:
    PresidentialPardonForm(); // Protected default constructor

public:
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(PresidentialPardonForm const& other);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

    void executeAction(Bureaucrat const& executor) const;
    std::string getTarget() const;
};

#endif
