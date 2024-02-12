# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kschelvi <kschelvi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/12 17:41:55 by kschelvi      #+#    #+#                  #
#    Updated: 2024/02/12 17:48:25 by kschelvi      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = this_is_brain

CXX = c++
CXXFLAGS = -Werror -Wall -Wextra -std=c++98

SRC = ./main.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFLAGS) $^ -o $@

fclean:
	$(RM) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

re: fclean all

.PHONY: all fclean clean re