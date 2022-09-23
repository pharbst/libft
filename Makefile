# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2022/09/19 15:55:24 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRONAME	=	libftio
NAME	=	libftio.a
#DEPDIR	=	libft
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

Black			=	\033[0;30m
FBlack			=	\033[1;30m
Red				=	\033[0;31m
FRed			=	\033[1;31m
Green			=	\033[0;32m
FGreen			=	\033[1;32m
Brown/Orange	=	\033[0;33m
FBrown/Orange	=	\033[1;33m
FYellow			=	\033[1;33m
Yellow			=	\033[0;33m
Blue			=	\033[0;34m
FBlue			=	\033[1;34m
Purple			=	\033[0;35m
FPurple			=	\033[1;35m
Cyan			=	\033[0;36m
FCyan			=	\033[1;36m
FWhite			=	\033[1;37m
White			=	\033[0;37m
NC				=	\033[0m

OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))



all:	allstart $(NAME) allend

$(NAME):	objstart $(OBJS) objsend
	@ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c includes/libftio.h
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@printf "$@; "

clean:
	@echo "$(FRed)make clean $(PRONAME)$(Red)"
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)

fclean:
	@echo "$(FRed)make flcean $(PRONAME)$(Red)"
	@rm -rf $(OBJS)
	rm -rf $(OBJDIR)
	rm -rf $(NAME)

re:	restart fclean all rend

allstart:
	@echo "$(FYellow)make $(PRONAME)...$(NC)"
allend:
	@echo "$(FGreen)$(PRONAME) done!$(NC)"

objstart:
	@echo "$(Blue)creating object files...$(NC)"
objsend:
	@echo ""
	@echo "$(Green)object files created$(NC)"

restart:
	@echo "$(FPurple)recompiling $(PRONAME)...$(NC)"
rend:
	@echo "$(FGreen)$(PRONAME) recompiled$(NC)"

git:	commit push

commit:
	git commit -m "$(msg)"

push:
	git push -u

update:
	git pull

.PHONY:	all clean fclean re
