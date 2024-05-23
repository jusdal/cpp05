/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/05/23 18:11:18 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    
	// Bureaucrats with different grades
	Bureaucrat bob("Bob", 130);
	Bureaucrat alice("Alice", 40);
	Bureaucrat john("John", 5);

	// Forms
	ShrubberyCreationForm shrubForm("garden");
	RobotomyRequestForm robotForm("Bender");
	PresidentialPardonForm pardonForm("Richard Nixon");

	std::cout << "\n--- Shrubbery Creation Test ---\n";
	bob.signForm(shrubForm);  
	bob.executeForm(shrubForm);

	std::cout << "\n--- Robotomy Request Test ---\n";
	alice.signForm(robotForm);
	alice.executeForm(robotForm);

	std::cout << "\n--- Presidential Pardon Test ---\n";
	john.signForm(pardonForm);
	john.executeForm(pardonForm);

	std::cout << "\n--- Negative Tests ---\n";
	ShrubberyCreationForm shrubForm2("garden2");
	bob.executeForm(robotForm); // Grade too low
	alice.executeForm(pardonForm); // Grade too low
	john.executeForm(shrubForm2); // Form not signed

    return 0;
}

