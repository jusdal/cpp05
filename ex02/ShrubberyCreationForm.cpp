/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:22:22 by justindaly        #+#    #+#             */
/*   Updated: 2024/05/23 17:02:45 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other) : AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &rhs)
		AForm::operator=(rhs);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

static const std::string ASCII_TREES[] =
{
"   *"
"  ***"
" *****"
"*******"
"   |"
};

std::string ShrubberyCreationForm::getTarget() const
{
	return (_target);

}

void ShrubberyCreationForm::executeAction(Bureaucrat const& executor) const
{	
	std::ofstream outfile(_target + "_shrubbery");
    if (!outfile.is_open()) {
        throw std::runtime_error("Failed to create shrubbery file");
    }

    int numTrees = 3; // Number of rows to print

    const std::string ASCII_TREE[] = {
        "    *          *          *          *    ",
        "   ***        ***        ***        ***   ",
        "  *****      *****      *****      *****  ",
        " *******    *******    *******    ******* ",
        "*********  *********  *********  *********",
        "   |||        |||        |||        |||   "
    };

    for (int j = 0; j < numTrees; ++j) {
        for (size_t i = 0; i < sizeof(ASCII_TREE) / sizeof(ASCII_TREE[0]); ++i) {
            outfile << ASCII_TREE[i] << std::endl;
        }
        outfile << std::endl; // Add an empty line between trees
    }
    outfile.close();

	std::cout << executor.getName() << " has planted trees on " << _target << std::endl;
}