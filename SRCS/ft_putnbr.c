/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:24:02 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/24 03:38:05 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		i = 11;
	}
	else if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
		i += ft_putnbr(n);
	}
	else if (n >= 0 && n <= 9)
		i += ft_putchar(n + 48);
	else
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	return (i);
}
