#include <stdlib.h>
#include "cub3d.h"
#include <fcntl.h>
#include<stdio.h>
char	**make_map(t_list **head, int size)
{
	char	  **map = ft_calloc(size + 1, sizeof(char *));
	int		  i = -1;
	t_list	*tmp = *head;

	while (tmp)
	{
		map[++i] = tmp->content;
		tmp= tmp->next;
	}
	i = -1;
	while (map[++i])
		ft_putendl(map[i]);
	return (map);
}

int		main(int argc, char **argv)
{
	if(argc != 2)
		return(0);
		int rez;
	int      fd = open(argv[1], O_RDONLY);
	printf("%d\n",fd);
	char	  *line;
	t_list *head;

	while ((rez = get_next_line(fd, &line)) > 0)
		ft_lstadd_back(&head, ft_lstnew(line));
	ft_lstadd_back(&head, ft_lstnew(line));
	make_map(&head, ft_lstsize(head));

}