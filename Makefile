CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c \
ft_tolower.c ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c \
ft_toupper.c ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isalpha.c \
ft_memmove.c ft_strdup.c ft_strnstr.c ft_isascii.c ft_memset.c \
ft_striteri.c ft_strrchr.c ft_isdigit.c ft_putchar_fd.c ft_strjoin.c \
ft_strtrim.c ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
ft_hexitoa.c ft_printf_c.c ft_printf_d.c ft_printf_hex.c ft_printf_p.c \
ft_printf_s.c ft_printf_u.c ft_printf.c

SRCSBNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
OBJSBNS = $(SRCSBNS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "\033[32m$(NAME) created succesfully"

%.o : %.c
	@$(CC) -c $^
	@echo "\033[35m$@ created\033[37m"


clean :
	@rm -f $(OBJS) $(OBJSBNS)
	@echo "\033[33mobjects files of libft are deleted\033[37m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[33m$(NAME) are deleted\033[37m"

re : fclean all

bonus : fclean $(OBJS) $(OBJSBNS)
	@ar rc $(NAME) $(OBJS) $(OBJSBNS)
	@echo "\033[32mbonus are created succesfully\033[37m"