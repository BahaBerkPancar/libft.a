/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpancar <bpancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:14:10 by bpancar           #+#    #+#             */
/*   Updated: 2024/10/19 17:56:37 by bpancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int	a;

	a = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			a++;
		while (*s && *s != c)
			s++;
	}
	return (a);
}

static void	ft_dispose_arr(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		j;
	int		len;

	len = ft_countword(s, c);
	final = malloc(sizeof(char *) * (len + 1));
	if (!final)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		final[i] = ft_substr(s, 0, j);
		if (!final[i])
			return (ft_dispose_arr(final, i), NULL);
		s += j;
	}
	final[i] = NULL;
	return (final);
}