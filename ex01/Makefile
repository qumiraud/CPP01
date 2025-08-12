# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/12 21:51:24 by qumiraud          #+#    #+#              #
#    Updated: 2025/08/12 22:38:26 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = NewArray

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	zombieHorde.cpp\
	Zombie.class.cpp\

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
