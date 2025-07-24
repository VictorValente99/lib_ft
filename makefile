NAME = libft.a

SRCS = ft_isalpha(int c)\
ft_isdigit(int c)\
ft_isalnum(int c)\
ft_isascii(int c)\
ft_isprint(int c)\
ft_tolower(int c)\
ft_strlen.c(char *c)\
ft_strncmp(char *str1, char *str2, int n)\
ft_strchr.c\
ft_strrchr.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strdup.c\
ft_strnstr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_substr.c\
ft_strmapi.c\
ft_striteri.c\
ft_atoi.c\
ft_itoa.c\
ft_memset.c\
ft_memcpy.c\
ft_memchr.c\
ft_memcmp.c\
ft_calloc.c\
ft_bzero.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\

OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
AR = ar rcs

CFLAGS = -Wall -Wextra -Werror -g

cc:
	@$(CC) $(CFLAGS) $(f) -o $(f:.c=)

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: All clean fclean re cc execute
