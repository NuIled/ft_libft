NAME = libft.a

CC = cc

CFLAGS = -Werror -Wextra -Wall

SRC = ft_strjoin.c  ft_substr.c  ft_strnstr.c ft_memcpy.c   ft_strdup.c    ft_calloc.c  ft_memset.c   ft_bzero.c \
ft_memcmp.c    ft_isalnum.c    ft_isprint.c    ft_strlcat.c    ft_strrchr.c \
    ft_isalpha.c    ft_memchr.c     ft_strlcpy.c    ft_tolower.c \
   ft_isascii.c    ft_memmove.c    ft_strlen.c     ft_toupper.c \
ft_atoi.c       ft_isdigit.c    ft_strchr.c     ft_strncmp.c

OBJECTS  = $(SRC:.c=.o)

RM = /bin/rm -rf

all = $(NAME)

$(NAME) :$(OBJECTS)
# $(CC) $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJECTS)

clean :
	$(RM) $(OBJECTS)
fclean :
	$(RM) $(NAME)
re :
	$(RM) $(NAME) $(OBJECTS)

.Phony : clean fclean re
