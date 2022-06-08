/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:05:56 by yotak             #+#    #+#             */
/*   Updated: 2022/03/16 14:34:46 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nbr)
{
	int	t;

	t = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr = -nbr;
		t++;
	}
	while (nbr)
	{
		t++;
		nbr /= 10;
	}
	return (t);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		cnt;
	char	*itoa;

	nbr = (long)n;
	cnt = intlen(nbr);
	itoa = (char *)malloc(cnt + 1);
	if (!itoa)
		return (0);
	itoa[cnt] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		itoa[0] = '-';
	}
	if (nbr == 0)
		itoa[0] = '0';
	while (cnt && nbr)
	{
		itoa[--cnt] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (itoa);
}
