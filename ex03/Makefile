# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/13 08:41:10 by qumiraud          #+#    #+#              #
#    Updated: 2025/08/13 13:39:01 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fight

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	Weapon.class.cpp\
	HumanA.class.cpp\
	HumanB.class.cpp\

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $^ -o $@

%.o : %*.cpp
	$(CC) -o $@ -c $< $(CXXFLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re