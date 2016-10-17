# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: takiapo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/13 18:46:38 by takiapo           #+#    #+#              #
#    Updated: 2016/10/17 16:56:48 by takiapo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = serveur

NAME2 = client

SDIR = ./srcs

IDIR = ./includes

ODIR = ./objs

SRCS1 = serveur.c

SRCS2 = client.c

OBJ1 = $(patsubst %.c, $(ODIR)/%.o, $(SRCS1))

OBJ2 = $(patsubst %.c, $(ODIR)/%.o, $(SRCS2))

LNAME = ft

LIBDIR = lib$(LNAME)

LIBIDIR = ./$(LIBDIR)/includes

CFLAGS = -Wall -Wextra -Werror

all: $(NAME1) $(NAME2)

$(NAME1):$(OBJ1)
	@make -C $(LIBDIR)
	gcc -o $(NAME1) $(CFLAGS) $(OBJ1) -L$(LIBDIR) -l$(LNAME)
	@echo "done."

$(NAME2):$(OBJ2)
	@make -C $(LIBDIR)
	gcc -o $(NAME2) $(CFLAGS) $(OBJ2) -L$(LIBDIR) -l$(LNAME)
	@echo "done."

$(ODIR)/%.o:$(addprefix $(SDIR)/, %.c)
	@mkdir -p $(ODIR)
	gcc $(CFLAGS) -o $@ -c $^ -I$(IDIR) -I$(LIBIDIR)

clean:
	@make clean -C $(LIBDIR)
	/bin/rm -rf $(ODIR)

fclean: clean
	@make fclean -C $(LIBDIR)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
