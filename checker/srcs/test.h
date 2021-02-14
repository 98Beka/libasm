/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 22:49:28 by ehande            #+#    #+#             */
/*   Updated: 2021/02/13 10:25:19 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H
#include "../../libasm.h"
#include "libft/libft.h"
#include "get_next_line/get_next_line.h"
#include <fcntl.h>
#define CMP1 "fdsa"
#define CMP2 "sdf"
char    flag;
int     ch_op(int i);
void    w(int fd, char *s);
void    wk(int fd, int i, char msk);
void    wh(int fd, char *h);
void    ch_strcmp(int fd);
void    ch_strcpy(int fd, char *v);
void    ch_strdup(int fd, char *v);
void    ch_strlen(int fd, char *v);
int     ch_write(int fd, char *v);
int     ch_read(int fd);
size_t  larger_len(char *s1, char *s2);
void    coffee(int fd);
void    res_out(char msk, char *f, int i);
#endif