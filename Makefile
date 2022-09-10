# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2022/09/10 15:16:59 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftio.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I includes

SRCDIR	=	./src

OBJDIR	=	./obj

FILES	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_substr.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_bufferjoin.c\
			ft_buffinit.c\
			ft_chartostr.c\
			ft_itohex.c\
			ft_ptrtohex.c\
			ft_strjoinchar.c\
			ft_strjoinfree.c\
			ft_strlower.c\
			ft_strupper.c\
			ft_uitoa.c\
			ft_printf.c\
			ft_printf_helper.c\
			get_next_line_bonus.c\
			get_next_line_utils_bonus.c\

OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))



all:	$(NAME)

$(NAME):	$(OBJS)
	@echo make libft
	@ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c ./includes/libftio.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@echo make clean libft
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean:
	@echo make flcean libft
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re