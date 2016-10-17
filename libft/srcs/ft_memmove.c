/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbinder <mbinder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:28:10 by mbinder           #+#    #+#             */
/*   Updated: 2015/01/20 16:35:39 by mbinder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d1;
	const char	*s1;

	d1 = dst;
	s1 = src;
	if (d1 <= s1)
	{
		return (ft_memcpy(dst, src, n));
	}
	d1 = d1 + n;
	s1 = s1 + n;
	while (n > 0)
	{
		d1--;
		s1--;
		*d1 = *s1;
		n--;
	}
	return (dst);
}
