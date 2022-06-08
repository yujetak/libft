/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:12:23 by yotak             #+#    #+#             */
/*   Updated: 2022/03/17 17:35:12 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*dest;

	size = 0;
	size = ft_strlen(s1);
	dest = (char *) malloc (sizeof (char) * (size + 1));
	if (!dest)
		return (NULL);
	while (*s1 != '\0')
	{
		*dest++ = *s1++;
	}
	*dest = '\0';
	return (dest - size);
}
