#include "test.h"

int call_fs(int fd, char *v)
{
	if (ch_write(fd, v))
		return (1);
	ch_strlen(fd, v);
	ch_strdup(fd, v);
	ch_strcpy(fd, v);
	if(ch_read(fd))
		return (1);
	ch_strcmp(fd);
	return (0);
}

void gener_v(char *s, int i, char *v)
{
	int len;

	len = strlen(s);
	s[len] = v[i %(len - 1)];
	s[len + 1] = '\0';
}

int loop(int fd, char *v, int i)
{
	char s[100000];

	strcpy(s, v);
	while (i--)
	{
		gener_v(s, i, v);
		if (call_fs(fd, s))
			return (1);
	}
	i = strlen(s);
	res_out(0b100000, "ft_read", i);
	res_out(0b010000, "ft_strcmp", i);
	res_out(0b001000, "ft_strcpy", i);
	res_out(0b000100, "ft_strdup", i);
	res_out(0b000010, "ft_strlen", i);
	res_out(0b000001, "ft_write", i);
	coffee(fd);
	return (0);
}

int check_args(int c, char **v, int *i)
{
	flag = 0x000000;
	*i = 1;
	if (c < 2)
		printf("ples, write argument\n");
	else if (c > 3)
	{
		printf("ples, write only one or two argument\n");
		return (1);
	}
	if (c == 3)
		*i = atoi(v[1]);
	if (*i > 1000)
	{
		*i = 1000;
		printf("worring : if (arg[1] > 1000) arg[1] = 1000\n");
	}
	return (0);
}

int	main(int c, char **v)
{
	int fd;
	int i;
	char *s;
	
	if(check_args(c, v, &i))
		return (0);
	if(ch_op(fd = open("results.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH )))
	{
		close(fd);
		return (0);
	}
	if (c == 3)
		s = v[2];
	else
		s = v[1];
	if (loop(fd, s, i))
		return (0);
	printf("check file - results.txt\n");
	return (1);
}