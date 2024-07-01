/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/07/01 18:33:53 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void testIntern() {
    std::cout << "\n--- Testing Intern ---\n";

    try {
        Intern someRandomIntern;
        AForm* rrf;
        AForm* ppf;
        AForm* scf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        ppf = someRandomIntern.makeForm("presidential pardon", "Richard Nixon");
        scf = someRandomIntern.makeForm("shrubbery creation", "home");

        std::cout << *rrf << std::endl;
        std::cout << *ppf << std::endl;
        std::cout << *scf << std::endl;

        delete rrf;
        delete ppf;
        delete scf;
    }
    catch (std::exception & e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}

int main() {
    testIntern();
    return 0;
}

