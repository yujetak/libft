/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yotak <yotak@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:37:33 by yotak             #+#    #+#             */
/*   Updated: 2022/03/16 11:32:59 by yotak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char	**res, int idx)
{
	int	i;

	i = 0;
	while (res[i] && i <= idx)
	{
		free(res[i]);
		i++;
	}
	free(res);
	res = NULL;
	return (NULL);
}

static void	storesplit(char *res, char *s, char c, int i)
{
	int	k;

	k = 0;
	while (s[i] && s[i] != c)
	{
		res[k] = s[i];
		k++;
		i++;
	}
	res[k] = '\0';
}

static char	**wordsplit(char *s, char c, char **res)
{
	size_t	i;
	size_t	j;
	size_t	idx;

	i = 0;
	idx = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
		{
			j = 0;
			while (i + j < ft_strlen(s) && s[i + j] != c)
				j++;
			res[idx] = (char *)malloc(j + 1);
			if (!res)
				return (ft_free(res, idx));
			storesplit(res[idx], s, c, i);
			idx++;
			i += j;
		}
		i++;
	}
	return (res);
}

static int	wordcnt(char *s, char c)
{
	int	cnt;
	int	idx;

	cnt = 0;
	idx = 0;
	while (s[idx])
	{
		if (s[idx] && s[idx] != c)
		{
			cnt++;
			while (s[idx] && s[idx] != c)
				idx++;
		}
		while (s[idx] && s[idx] == c)
			idx++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**res;

	if (!s)
		return (0);
	len = wordcnt((char *)s, c);
	res = (char **)malloc(sizeof(char *) * (len + 1));
	if (!res)
		return (0);
	if (wordsplit((char *)s, c, res) == NULL)
		return (NULL);
	res[len] = 0;
	return (res);
}
