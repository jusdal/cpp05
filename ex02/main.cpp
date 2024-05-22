/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/05/22 17:26:16 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try {
        // Create a Bureaucrat with sufficient grade to execute the form
        Bureaucrat bob("Bob", 130); 

        // Create a ShrubberyCreationForm with a target location
        ShrubberyCreationForm shrubForm("garden"); 

        // Have the Bureaucrat sign the form
        bob.signForm(shrubForm); 

        // Have the Bureaucrat execute the form
        bob.executeForm(shrubForm);

        std::cout << "Shrubbery creation successful!" << std::endl;

    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Indicate failure
    }
    return 0; // Indicate success
}
