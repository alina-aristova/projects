SRCS            =   ./pars_map.c\
					./lib.c\
					./get_next_line.c\
					./get_next_line_utils.c\
					libft/ft_split.c\
					libft/ft_memchr.c\
                    libft/ft_memcmp.c\
                    libft/ft_strlcpy.c\
					

OBJS            = $(SRCS:.c=.o)

CC              = clang

RM              = rm -f

CFLAGS          = -O3 -g -Wall -Wextra -Werror -Iinc/ -Imlx/ -Ilibft/inc/

LIBS            = -Lmlx -lmlx -framework OpenGL -framework AppKit -lm -Llibft -lft

MLX             = libmlx.dylib



NAME            = cub3D

all:            $(NAME)

$(NAME):        $(LIBFT) $(OBJS)
					clang ${CFLAGS} -o ${NAME} ${OBJS}





clean:
				$(RM) $(OBJS)

fclean:         clean
				$(RM) $(NAME) $(MLX) $(LIBFT) ./mlx/$(MLX)

re:             fclean $(NAME)

.PHONY:         all clean fclean re libft
