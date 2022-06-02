### LINUX ###

# SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strplit.c ft_itoa.c

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

SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c

SPATH	= ./

SRCS	= ${addprefix ${SPATH}, ${SRC}}

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= cc

HEADS	= ./

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c -I ${HEADS} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
