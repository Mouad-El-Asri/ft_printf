/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:06:10 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/24 03:18:09 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_put_unsigned_int(unsigned int n);
int	ft_putaddress(size_t n);
int	ft_putchar(char c);
int	ft_puthex(unsigned int n, char *arr);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

int	ft_printf(const char *str, ...);

#endif