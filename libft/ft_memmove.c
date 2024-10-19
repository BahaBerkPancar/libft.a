/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpancar <bpancar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:13:51 by bpancar           #+#    #+#             */
/*   Updated: 2024/10/19 13:51:58 by bpancar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s_dst;
	unsigned char	*s_src;

	if (!dest && !src)
		return (NULL);
	s_dst = (unsigned char *)dest;
	s_src = (unsigned char *)src;
	if (s_src > s_dst)
		ft_memcpy(s_dst, s_src, n);
	else
	{
		while (n--)
			s_dst[n] = s_src[n];
	}
	return (dest);
}
