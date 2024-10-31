/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:56 by mnahli            #+#    #+#             */
/*   Updated: 2024/10/29 16:04:40 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *)b;
    int i = 0;

    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }

    return (b);   
}