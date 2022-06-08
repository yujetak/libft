/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:58:24 by yotak             #+#    #+#             */
/*   Updated: 2022/03/18 11:22:59 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;

	chr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			chr = (char *)s;
		s++;
	}
	if (*s == '\0' && (char)c == '\0')
		return ((char *)s);
	return (chr);
}
