# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 15:24:52 by jdaly             #+#    #+#              #
#    Updated: 2024/05/22 18:13:10 by justindaly       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = forms2

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRC_FILES = main Bureaucrat AForm ShrubberyCreationForm #RobotomyRequestForm PresidentialPardon

SRC = $(SRC_FILES:=.cpp)
OBJ_FILES = $(SRC_FILES:=.o)
HEADER = Bureaucrat.hpp Form.hpp

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CPPFLAGS) $(OBJ_FILES) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CPPFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re