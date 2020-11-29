#include"cub3d.h"



void	ft_putendl(char const *s)
{
	size_t len;

	if (s)
	{
		len = ft_strlen(s);
		write(1, s, len);
		write(1, "\n", 1);
	}
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = new;
}
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (node);
	node->content = content;
	node->next = NULL;
	return (node);
}
int		ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		size;

	if (!lst)
		return (0);
	size = 0;
	node = lst;
	while (node)
	{
		size++;
		node = node->next;
	}
	return (size);
}



int		ft_isspace(char c)
{
	return ((c == ' ' || (c >= 9 && c <= 13)) ? 1 : 0);
}

int		ft_atoi(char *str)
{
	int				i;
	long long int	res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
		if (res > 2147483647 && sign == 1)
			return (-1);
		if (res <= -2147483648 && sign == -1)
			return (0);
	}
	return (res * sign);
}
void	ft_bzero(char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	all_size;

	all_size = count * size;
	str = malloc(all_size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, all_size);
	return (str);
}

