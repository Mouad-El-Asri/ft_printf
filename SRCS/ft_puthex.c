/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-asr <moel-asr@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:50:22 by moel-asr          #+#    #+#             */
/*   Updated: 2022/10/24 03:38:09 by moel-asr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_puthex(unsigned int n, char *arr)
{
	int	i;

	i = 0;
	if (n >= 0 && n < 16)
		i += ft_putchar(arr[n]);
	if (n >= 16)
	{
		i += ft_puthex(n / 16, arr);
		i += ft_puthex(n % 16, arr);
	}
	return (i);
}
