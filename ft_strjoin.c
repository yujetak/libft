/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:48:20 by yotak             #+#    #+#             */
/*   Updated: 2022/03/15 15:38:47 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	dlen;

	if (!s1 || !s2)
		return (NULL);
	dlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	dst = (char *)malloc(sizeof(char) * dlen);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, dlen);
	ft_strlcpy(dst + ft_strlen(s1), s2, dlen);
	return (dst);
}
