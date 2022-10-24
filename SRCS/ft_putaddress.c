/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:16:33 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/24 07:14:30 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putaddress(size_t n)
{
	int	i;

	i = 0;
	if (n >= 0 && n < 16)
		i += ft_putchar("0123456789abcdef"[n]);
	if (n >= 16)
	{
		i += ft_putaddress(n / 16);
		i += ft_putaddress(n % 16);
	}
	return (i);
}
