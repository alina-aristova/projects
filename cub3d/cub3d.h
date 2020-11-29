#ifndef CUB3D_H
# define CUB3D_H

#include <stdlib.h>
#include"libft/libft.h"
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
void	ft_putendl(char const *s);
t_list	*ft_lstnew(void *content);
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_cub
{
	int resolution_x;
	int resolution_y;
	char *north_texture;
	char *south_texture;
	char *west_texture;
	char *east_texture;
	char *sprite_texture;
	int color_f;
	char **color_floor;
	int color_s;
	char **color_sell;
	int r;
	int g;
	int b;

}				t_cub;
int		get_next_line(int fd, char **line);
int	ft_strlen(const char *str);
char	*ft_strndup(char *s, size_t n);

char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(char *s, size_t n);
int		ft_atoi(char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strchr(const char *s, int c);
char		**ft_split(char const *s, char c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlcpy(char *restrict dst, const char *restrict src,
                         size_t dstsize);
#endif