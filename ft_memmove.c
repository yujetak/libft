/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:16:08 by yotak             #+#    #+#             */
/*   Updated: 2022/04/26 20:56:56 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rmove(unsigned char *dptr, unsigned char *sptr, size_t len)
{
	dptr += len - 1;
	sptr += len - 1;
	while (len > 0)
	{
		*dptr = *sptr;
		dptr--;
		sptr--;
		len--;
	}
}

void	ft_move(unsigned char *dptr, unsigned char *sptr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*dptr = *sptr;
		dptr++;
		sptr++;
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dptr;
	unsigned char	*sptr;

	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	if (dptr == sptr || !len)
		return (dst);
	if (dptr > sptr)
		ft_rmove(dptr, sptr, len);
	else
		ft_move(dptr, sptr, len);
	return (dst);
}
