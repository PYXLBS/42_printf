/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabertha <pabertha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:22:31 by pabertha          #+#    #+#             */
/*   Updated: 2023/08/09 13:50:30 by pabertha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>
# include <string.h>
# include <strings.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>

int					ft_printf(const char *content, ...);
int					ft_strlen(const char *s);
int					ft_putchar(char c);
int					ft_putstr(char *s);
int					ft_putnbr(int n);
char				*ft_strchr(const char *s, int c);
int					ft_putuint(unsigned int n);
int					ft_puthex(unsigned int n, char c);
int					ft_putptr_hex(void *ptr);
int					ft_convert(char flag, va_list arg);
int					ft_handle_content(const char **content);

#endif
