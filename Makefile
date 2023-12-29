# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pharbst <pharbst@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/06 09:33:42 by peter             #+#    #+#              #
#    Updated: 2023/11/12 04:00:09 by pharbst          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include color.mk

PRONAME		=	libftio
MAC_NAME	=	libftio.a
LINUX_NAME	=	libftio_linux.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -I includes
CFLAGS		+=	-g
# CFLAGS	+=	-fsanatize=address

MAC_OBJDIR		=	./obj
LINUX_OBJDIR	=	./obj_linux

HEADER	=	./includes/libftio.h
# checks for OS Mac or Linux and sets the correct objdir and name this is useful if you are switching the os often
ifeq ($(shell uname), Darwin)
	OBJDIR	=	$(MAC_OBJDIR)
	NAME	=	$(MAC_NAME)
else
	OBJDIR	=	$(LINUX_OBJDIR)
	NAME	=	$(LINUX_NAME)
endif

VPATH		:=	src \
				src/mandatory \
				src/bonus \
				src/ft_printf \
				src/get_next_line \
				src/additional

#################################
#			Mandatory           #
#################################

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
			ft_striteri.c

#############################
#           Bonus           #
#############################

FILES	+=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

#################################
#           ft_printf           #
#################################

FILES 	+=	ft_bufferjoin.c \
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
			better_gnl.c

##################################
#           Additional           #
##################################

FILES	+=	ft_strcmp.c \
			ft_free_split.c \
			ft_isspace.c \
			ft_strftrim.c \
			ft_putstrsfd.c \
			strjoinfree.c \
			fps_counter.c

OBJS	=	$(addprefix $(OBJDIR)/, $(FILES:.c=.o))

all: header obj_header
	@./spinner.sh make -s $(OBJS)
	@make -s linking_header
	@./spinner.sh make -s $(NAME)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o:	%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

relink: header
	@rm -rf $(NAME)
	@printf "$(Green)Relinking $(PRONAME)$(RESET)			   "
	@ar rcs $(NAME) $(OBJS)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

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

wipe: header
	@./spinner.sh make -s fcleanall

fcleanall:
	@printf "$(FRed)Wiping $(PRONAME)$(FGreen)$(RESET)				   "
	@rm -rf $(MAC_OBJDIR)
	@rm -rf $(MAC_NAME)
	@rm -rf $(LINUX_OBJDIR)
	@rm -rf $(LINUX_NAME)
	@printf "$(FGreen)[$(TICK)]\n$(RESET)"

re:
	@$(MAKE) -s header cleanall all

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

.PHONY: all clean fclean re header obj_header linking_header git commit push update cleanall fcleanall wipe relink
