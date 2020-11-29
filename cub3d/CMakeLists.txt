cmake_minimum_required(VERSION 3.17)
project(cub3d)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(libft)
include_directories(mlx)

add_executable(cub3d
#        libft/ft_atoi.c
#        libft/ft_bzero.c
#        libft/ft_calloc.c
#        libft/ft_isalnum.c
#        libft/ft_isalpha.c
#        libft/ft_isascii.c
#        libft/ft_isdigit.c
#        libft/ft_isprint.c
#        libft/ft_itoa.c
#        libft/ft_memccpy.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
#        libft/ft_memcpy.c
#        libft/ft_memmove.c
#        libft/ft_memset.c
#        libft/ft_putchar_fd.c
#        libft/ft_putendl_fd.c
#        libft/ft_putnbr_fd.c
#        libft/ft_putstr_fd.c
        libft/ft_split.c
#        libft/ft_strchr.c
#        libft/ft_strdup.c
#        libft/ft_strjoin.c
#        libft/ft_strlcat.c
       libft/ft_strlcpy.c
#        libft/ft_strlen.c
#        libft/ft_strmapi.c
#        libft/ft_strncmp.c
#        libft/ft_strnstr.c
#        libft/ft_strrchr.c
#        libft/ft_strtrim.c
#        libft/ft_substr.c
#        libft/ft_tolower.c
#        libft/ft_toupper.c
#        libft/libft.h
#        mlx/man/man3/mlx.3
#        mlx/man/man3/mlx_loop.3
#        mlx/man/man3/mlx_new_image.3
#        mlx/man/man3/mlx_new_window.3
#        mlx/man/man3/mlx_pixel_put.3
#        mlx/font.c
#        mlx/interface.swift
#        mlx/Makefile
#        mlx/mlx.h
#        mlx/mlx_image.swift
#        mlx/mlx_image.swiftdoc
#        mlx/mlx_image.swiftmodule
#        mlx/mlx_init.swift
#        mlx/mlx_init.swiftdoc
#        mlx/mlx_init.swiftmodule
#        mlx/mlx_png.c
#        mlx/mlx_rgb.c
#        mlx/mlx_string_put.c
#        mlx/mlx_window.swift
#        mlx/mlx_window.swiftdoc
#        mlx/mlx_window.swiftmodule
#        mlx/mlx_xpm.c
#        countchr.c
#        cub.c
       cub3d.h
        get_next_line.c
        get_next_line.h
        get_next_line_utils.c
        lib.c
        pars_map.c)
