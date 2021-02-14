/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehande <ehande@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:55:09 by ehande            #+#    #+#             */
/*   Updated: 2021/02/11 12:02:22 by ehande           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H
#include <stdlib.h>

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char * dst, const char * src);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_write(int fildes, const void *buf, size_t nbyte);
size_t		ft_read(int fildes, void *buf, size_t nbyte);
char *		ft_strdup(const char *s1);

#endif
