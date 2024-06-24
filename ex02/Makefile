# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 14:51:52 by anurtiag          #+#    #+#              #
#    Updated: 2024/06/20 16:22:50 by anurtiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	fixed_point


SRCS			=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ				=	$(SRCS:.cpp=.o)


CC				=	c++


CFLAGS			=	-Wall -Wextra -Werror -std=c++98


RM				=	rm -rf


all:			$(NAME)


$(NAME):		$(OBJ)
				@$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

%.o:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) $(OBJ)


fclean:			clean
				@$(RM) $(NAME)


re:				fclean all


.PHONY:			all clean fclean re