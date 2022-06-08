/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:43:02 by yotak             #+#    #+#             */
/*   Updated: 2022/05/26 10:43:26 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= (unsigned int)slen)
		return (ft_strdup(""));
	if (slen < len)
		len = slen;
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, &s[start], len + 1);
	return (dst);
}
