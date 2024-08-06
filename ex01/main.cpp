/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/08/06 13:50:22 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Test function for Form creation, signing, and execution
void testForm() {
    std::cout << "\n--- Testing Form ---\n";

	Bureaucrat b("Charlie", 35);
	Form f("Form 28B", 40, 40); // Requires grade 40 to sign, 40 to execute

	std::cout << "Before signing: " << f << std::endl;
	b.signForm(f);
	std::cout << "After signing: " << f << std::endl;

	Bureaucrat lowGradeB("LowGrade", 60); // Grade too low to sign
	Form f2("Form 28C", 40, 40);

	std::cout << "\nAttempting to sign with low-grade bureaucrat: " << std::endl;
	lowGradeB.signForm(f2); // Should throw an exception
}

int main() {
    testForm();
    return 0;
}