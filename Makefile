### LINUX ###

# SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strplit.c ft_itoa.c ft_lstdelone.c

# SPATH	= ./

# SRCS	= ${addprefix ${SPATH}, ${SRC}}

# OBJS	= ${SRCS:.c=.o}

# NAME	= libft.so

# CC		= cc

# HEADS	= ./

# CFLAGS	= -Wall -Wextra -Werror

# so:
# 	$(CC) -nostartfiles -fpic $(CFLAGS) $(SRCS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

# .c.o:
# 			${CC} ${CFLAGS} -c -I ${HEADS} $< -o ${<:.c=.o}

# ${NAME}:	${OBJS}
# 			ar rc ${NAME} ${OBJS}
# 			ranlib ${NAME}

# all:		${NAME}

# clean:
# 			rm -f ${OBJS}

# fclean:		clean
# 			rm -f ${NAME}

# re:			fclean all

# .PHONY:		all clean fclean re


### MAC ###

SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRC:.c=.o}

OBJS_B	= ${SRC_B:.c=.o}

NAME	= libft.a

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:		${OBJS_B}
			ar rc ${NAME} ${OBJS_B}

all:		$(NAME)

clean:
			rm -f ${OBJS} ${OBJS_B}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
