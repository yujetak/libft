/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:34:04 by yotak             #+#    #+#             */
/*   Updated: 2022/04/26 20:56:45 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*b1;

	idx = 0;
	b1 = (unsigned char *)b;
	while (idx < len)
		b1[idx++] = (unsigned char)c;
	return ((void *)b1);
}
