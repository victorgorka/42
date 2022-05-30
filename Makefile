SRCS		= ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c
SRCS_BONUS	= ft_lstnew_bonus.c
OBJS		= ${SRCS:.c=.o}
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: ${NAME}

%.o:.c

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}
bonus: ${NAME} ${OBJS_BONUS}
	ar rcs ${NAME} ${OBJS_BONUS}

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: bonus all clean fclean re 
