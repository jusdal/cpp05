/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:17:39 by jdaly             #+#    #+#             */
/*   Updated: 2024/07/01 18:17:25 by justindaly       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Test function for Bureaucrat creation and grade manipulation
void testBureaucrat() {
    std::cout << "\n--- Testing Bureaucrat ---\n";

    try {
        Bureaucrat bob("Bob", 1); // Highest grade
        std::cout << "Created bureaucrat: " << bob << std::endl;

        Bureaucrat alice("Alice", 150); // Lowest grade
        std::cout << "Created bureaucrat: " << alice << std::endl;

        Bureaucrat invalid("Invalid", 0); // Should throw an exception
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat charlie("Charlie", 50);
        std::cout << "Created bureaucrat: " << charlie << std::endl;

        charlie.incGrade();
        std::cout << "After increment: " << charlie << std::endl;

        charlie.decGrade();
        std::cout << "After decrement: " << charlie << std::endl;

        charlie.decGrade(); // Should throw an exception (grade too low)
    } catch (std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}

int main() {
    testBureaucrat();
    return 0;
}
