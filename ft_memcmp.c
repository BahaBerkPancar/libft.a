/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpancar <bpancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:13:47 by bpancar           #+#    #+#             */
/*   Updated: 2024/10/28 18:04:11 by bpancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s_dest;
	unsigned char	*s_src;

	s_dest = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (s_dest[i] != s_src[i])
		{
			if (s_dest[i] > s_src[i])
				return (s_dest[i] - s_src[i]);
			else if (s_dest[i] < s_src[i])
				return (s_dest[i] - s_src[i]);
		}
		i++;
	}
	return (0);
}
