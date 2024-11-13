/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:54 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/13 12:09:49 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dptr;
	unsigned char	*sptr;
	size_t	i;

	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	i = 0;
	if (dptr < sptr)
	{
		while (i < n)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			dptr[n - 1] = sptr[n - 1];
			n--;
		}
	}
	return (dst);
}
