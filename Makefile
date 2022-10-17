NAME = libft.a

CC = cc

CFLAGS = -Werror -Wextra -Wall

SRC =    ft_isalnum.c    ft_isdigit.c    ft_strchr.c     ft_strlen.c     ft_tolower.c \
	ft_isalpha.c    ft_isprint.c    ft_strlcat.c    ft_strncmp.c    ft_toupper.c \
	atoi.c          ft_isascii.c    ft_memchr.c     ft_strlcpy.c    ft_strrchr.c

OBJECTS  = $(SRC:.c=.o)

RM = /bin/rm -rf

all = $(NAME)

$(NAME) :$(OBJECTS)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJECTS)

clean :
	$(RM) $(OBJECTS)
fclean :
	$(RM) $(NAME)
re : 
	$(RM) $(NAME) $(OBJECTS)

.Phony : clean fclean re