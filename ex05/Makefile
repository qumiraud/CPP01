# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 17:05:43 by qumiraud          #+#    #+#              #
#    Updated: 2025/09/10 12:19:16 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	Harl.class.cpp\

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
