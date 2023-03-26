# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2023/03/26 03:23:15 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL=	/bin/bash

Black			=	$(shell echo -e "\033[0;30m")
FBlack			=	$(shell echo -e "\033[1;30m")
Red				=	$(shell echo -e "\033[0;31m")
FRed			=	$(shell echo -e "\033[1;31m")
Green			=	$(shell echo -e "\033[0;32m")
FGreen			=	$(shell echo -e "\033[1;32m")
Brown/Orange	=	$(shell echo -e "\033[0;33m")
FBrown/Orange	=	$(shell echo -e "\033[1;33m")
FYellow			=	$(shell echo -e "\033[1;33m")
Yellow			=	$(shell echo -e "\033[0;33m")
Blue			=	$(shell echo -e "\033[0;34m")
FBlue			=	$(shell echo -e "\033[1;34m")
Purple			=	$(shell echo -e "\033[0;35m")
FPurple			=	$(shell echo -e "\033[1;35m")
Cyan			=	$(shell echo -e "\033[0;36m")
FCyan			=	$(shell echo -e "\033[1;36m")
FWhite			=	$(shell echo -e "\033[1;37m")
White			=	$(shell echo -e "\033[0;37m")
RESET			=	$(shell echo -e "\033[0m")
TICK			=	$(shell echo -e "\xE2\x9C\x94")

PRONAME	=	libftio
NAME	=	libftio.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I includes
CFLAGS	+=	-g
# CFLAGS	+=	-fsanatize=address

HEADER	=	./includes/libftio.h
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
			ft_substr.c \
			ft_strmapi.c \
			ft_striteri.c \
\
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
\
			ft_bufferjoin.c \
			ft_buffinit.c \
			ft_chartostr.c \
			ft_itohex.c \
			ft_ptrtohex.c \
			ft_strjoinchar.c \
			ft_strjoinfree.c \
			ft_strlower.c \
			ft_strupper.c \
			ft_uitoa.c \
			ft_printf.c \
			ft_printf_helper.c \
			better_gnl.c \
\
			ft_strcmp.c \
			ft_free_split.c \
			ft_isspace.c \
			ft_strftrim.c \
			ft_putstrsfd.c \
			strjoinfree.c \


OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))

all:
	@./spinner.sh make -s $(NAME)

$(NAME):	header obj_header $(OBJS) linking_header
	@ar rcs $(NAME) $(OBJS)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

$(OBJDIR)/%.o:	$(SRCDIR)/*/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean: header
	@printf "$(FRed)Clean $(PRONAME)$(FGreen)				   "
	@rm -rf $(OBJS)
	@rm -rf $(OBJDIR)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

fclean: header
	@./spinner.sh make -s cleanall

cleanall:
	@printf "$(FRed)FCleaning $(PRONAME)$(FGreen)$(RESET)			   "
	@rm -rf $(OBJDIR)
	@rm -rf $(NAME)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

re:
	@./spinner.sh make -s header cleanall $(NAME)

header:
	@printf "$(FYellow)╔════════════════════════════════════════════╗\n\
║   .-.   .-..----. .----..---. .-. .----.   ║\n\
║   | |   | || {}  }| {_ {_   _}| |/  {}  \\  ║\n\
║   | \`--.| || {}  }| |    | |  | |\\      /  ║\n\
║   \`----'\`-'\`----' \`-'    \`-'  \`-' \`----'   ║\n\
╚════════════════════════════════════════════╝\n"

obj_header:
	@printf "$(FBlue)Compiling .o files$(RESET)			   "

linking_header:
	@printf "$(FGreen)[$(TICK)]\n$(Green)Linking $(PRONAME)$(RESET)				   "

git:	commit push

commit:
	git commit -m "$(msg)"

push:
	git push -u

update:
	git pull

.PHONY:	all clean fclean re header
