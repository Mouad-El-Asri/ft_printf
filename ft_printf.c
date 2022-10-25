/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:36:36 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/25 19:26:18 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list ap)
{
	int		size;

	size = 0;
	if (c == 'c')
		size += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		size += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		size += ft_putnbr(va_arg(ap, int));
	else if (c == 'x')
		size += ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		size += ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == 'u')
		size += ft_put_unsigned_int(va_arg(ap, unsigned int));
	else if (c == 'p')
	{
		size += ft_putstr("0x");
		size += ft_putaddress(va_arg(ap, unsigned long));
	}
	else if (c == '%')
		size += ft_putchar('%');
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	ap;

	i = 0;
	size = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
			size += ft_check(str[++i], ap);
		else
			size += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (size);
}
