# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 13:58:25 by qumiraud          #+#    #+#              #
#    Updated: 2025/08/12 19:38:53 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Newornot

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	newZombie.cpp\
	randomChump.cpp\
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
