#include "test.h"

void addch(char **s, char ch)
{
	char *tmp;

	tmp = malloc(sizeof(char) * (strlen(*s) + 1));
	tmp = ft_strcpy(tmp, *s);
	tmp[strlen(*s)] = ch;
	tmp[strlen(*s) + 1] = '\0';
	free(*s);
	*s = tmp;
}

int read_file(char *s1, char *s2)
{
	char *tmp;
	int tfd;
	int i;

	tmp = ft_strdup("0");
	if(ch_op(tfd = open("ch_read_write.txt", O_RDONLY)))
		return (1);
		i = -1;
	while(read(tfd, tmp, 1) && *tmp != '\n')
		s1[++i] = *tmp;
		s1[i] = '\0';
		i = -1;
	while(ft_read(tfd, tmp, 1))
		s2[++i] = *tmp;
		s2[i] = '\0';
	close(tfd);
	free(tmp);
	return (0);
}

int ch_read(int fd)
{
	char s1[100000];
	char s2[100000];
	
	if (read_file(s1, s2))
		return (1);
	wh(fd, "ft_read");
	w(fd, s1);
	w(fd, "\nmy: ");
	w(fd, s2);
	wk(fd, !ft_strncmp(s1, s2, strlen(s1)), 0b1000000);
	w(fd, "\n\n\n");
	return (0);
}