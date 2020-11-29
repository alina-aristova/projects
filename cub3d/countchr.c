int			count_chr(char *str, int c)
{
	int		count;
	char	*str1;

	count = 0;
	str1 = str;
	while ((str1 = ft_strchr(str1, c)))
	{
		count++;
		str1++;
	}
	return (count);
}