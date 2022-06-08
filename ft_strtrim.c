/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:03:58 by yotak             #+#    #+#             */
/*   Updated: 2022/03/15 14:38:59 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	istrim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!set || !s1)
		return (NULL);
	if (istrim((char)s1[start], set))
		while (s1[start] && istrim((char)s1[start], set))
			start++;
	end = ft_strlen(s1) - 1;
	if (end > start && istrim((char)s1[end], set))
		while (end > start && istrim((char)s1[end], set))
			end--;
	return (ft_substr(s1, start, end - start + 1));
}
