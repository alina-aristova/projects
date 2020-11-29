#include <stdlib.h>
#include "cub3d.h"
#include <fcntl.h>
#include<stdio.h>
// void colour_f(char *colour, t_cub *params)
// {
// 	char **res_colour = ft_split(colour,',');


// }
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
int count_str(char **str)
{
	int i;
	i = 0;
	while(str[i]!= NULL)
		i++;
	return(i);
}
int int_rgb(int r, int g, int b)
{
	return((r * 65536) + (g * 256) + b);
}
int check_color(char *color)
{
	int i;
	i = 0;
	int color_res;
	while (color[i])
	{
		if (!(ft_memchr("0123456789", color[i], 11)))
			return (-1);
		i++;
	}
	color_res = ft_atoi(color);
	if (color_res > 255 || color < 0)
		return (-1);
	return(color_res);
}
void colour_f(char *color, t_cub *params)
{
	int count_c;
	int count_s;
	if((count_c = (count_chr(color,','))) != 2)
		write(1,"error\n",6);

	params->color_floor = ft_split(color,',');

	if ((count_s = count_str(params->color_floor)) != 3) 
		write(1,"error\n",6);
	params->r = check_color(params->color_floor[0]);
	params->g = check_color(params->color_floor[1]);
	params->b = check_color(params->color_floor[2]);
	params->color_f = int_rgb(params->r,params->g,params->b);
}
void colour_s(char *color, t_cub *params)
{
	int count_c;
	int count_s;
	if((count_c = (count_chr(color,','))) != 2)
		write(1,"error\n",6);

	params->color_floor = ft_split(color,',');

	if ((count_s = count_str(params->color_floor)) != 3) 
		write(1,"error\n",6);
	params->r = check_color(params->color_floor[0]);
	params->g = check_color(params->color_floor[1]);
	params->b = check_color(params->color_floor[2]);
	params->color_s = int_rgb(params->r,params->g,params->b);
}


void resolution(char *resolution_x, char *resolution_y, t_cub *params)
{
	
	params->resolution_x = ft_atoi(resolution_x);
	
	params->resolution_y = ft_atoi(resolution_y);
	

}
void north_texture(char *north_texture, t_cub *params)
{
	
	params->north_texture = north_texture;
}
void south_texture(char *south_texture, t_cub *params)
{
	
	params->south_texture = south_texture;
}
void west_texture(char *west_texture, t_cub *params)
{
	
	params->west_texture = west_texture;
}

void east_texture(char *east_texture, t_cub *params)
{
	
	params->east_texture = east_texture;
}
void sprite_texture(char *sprite_texture, t_cub *params)
{
	
	params->sprite_texture = sprite_texture;
}
void check_params(char **res_split_line, t_cub *params)
{
	printf("%d\n",3);
	if((!ft_memcmp(res_split_line[0],"R",2)))
		resolution(res_split_line[1],res_split_line[2],params);
	
	else if(!ft_memcmp(res_split_line[0],"NO",3))
		north_texture(res_split_line[1],params);
	else if(!ft_memcmp(res_split_line[0],"SO",3))
		south_texture(res_split_line[1],params);
	else if(!ft_memcmp(res_split_line[0],"WE",3))
		west_texture(res_split_line[1],params);
	else if(!ft_memcmp(res_split_line[0],"EA",3))
		east_texture(res_split_line[1],params);
	else if(!ft_memcmp(res_split_line[0],"S",2))
		sprite_texture(res_split_line[1],params);
	 else if(!ft_memcmp(res_split_line[0],"F",2))
	 	colour_f(res_split_line[1],params);
	else if(!ft_memcmp(res_split_line[0],"C",2))
	 	colour_s(res_split_line[1],params);	
	
}
void read_params(char ***res_split_line, char *line, t_cub *params)
{
	printf("%d\n",1);
	if (!(*res_split_line = ft_split((const char*)line, ' ')))
		write(1,"error",5);
		printf("%d\n",2);
	check_params(*res_split_line, params);
	free(line);
	*line = 0;
	//free(*res_split_line);
	*res_split_line = 0;
}

int		main(int argc, char **argv)
{
	if(argc != 2)
		return(0);
	int      fd = open(argv[1], O_RDONLY);
	
	char	  *line;
	char **rez_split_line;
	int rez;
	
	t_cub params;
	while ((rez = get_next_line(fd, &line)) > 0)
	{	
		//printf("%d\n",1);
		read_params(&rez_split_line, line,&params);
	}
	read_params(&rez_split_line, line,&params);
	printf("%s\n",params.east_texture);
	printf("%s\n",params.north_texture);
	printf("%s\n",params.west_texture);
	printf("%s\n",params.south_texture);
	printf("%s\n",params.sprite_texture);
	printf("%d\n",params.resolution_x);
	printf("%d\n",params.resolution_y);
	printf("%d\n",params.color_f);
	printf("%d\n",params.color_s);
	return(0);
	close(fd);	
}