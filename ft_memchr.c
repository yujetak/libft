/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:48:41 by yotak             #+#    #+#             */
/*   Updated: 2022/03/14 11:33:52 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (n != 0)
	{
		while (n-- > 0)
		{
			if (*ptr == (unsigned char)c)
				return ((void *)ptr);
			ptr++;
		}
	}
	return (NULL);
}
