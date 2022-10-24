/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:57:08 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/24 03:38:21 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_unsigned_int(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 0 && n <= 9)
		i += ft_putchar(n + 48);
	else
	{
		i += ft_put_unsigned_int(n / 10);
		i += ft_put_unsigned_int(n % 10);
	}
	return (i);
}
