/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:02:46 by ehande            #+#    #+#             */
/*   Updated: 2021/02/13 09:41:49 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"


void w(int fd, char *s)
{
	write(fd, s, strlen(s));
}

void wk(int fd, int i, char msk)
{
	if(i)
		w(fd, "\n    __\n   |ok|                        (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧\n   ^^^^");
	else
	{
		w(fd, "\n    __\n   |ko|                        ლ(ಠ益ಠლ)\n   ^^^^");
		flag = flag | msk;
	}
}

size_t larger_len(char *s1, char *s2)
{
	size_t i1;
	size_t i2;

	i1 = strlen(s1);
	i2 = strlen(s2);
	if (i1 > i2)
		return (i1);
	return (i2);
}

void wh(int fd, char *h)
{
	w(fd, "\n***___");
	w(fd, h);
	w(fd,"___***\n\ndf: ");
}

int ch_op(int i)
{
	
	if (i < 1)
	{
		printf("\ncan't open file\n");
		return (1);
	}
	return (0);
}

void coffee(int fd)
{
	w(fd,"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	w(fd,"         )\n        ((\n         )\n     (\"\"\"\"\"\"\")o\n      '\"\"\"\"\"'");
}

void res_out(char msk, char *f, int i)
{
	if (flag & msk)
	{
		printf("\033[0;31mko\033[0m ");
		printf("%s  %i\n", f, i);
	}
	else
	{
		printf("\033[0;32mok\033[0m ");
		printf("%s\n", f);
	}
}