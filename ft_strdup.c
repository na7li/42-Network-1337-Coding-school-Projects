/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnahli <mnahli@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:54:19 by mnahli            #+#    #+#             */
/*   Updated: 2024/11/02 19:16:39 by mnahli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *ptr;
    size_t len;
    
    len = ft_strlen(s1);
    ptr = (char *) malloc(len + 1);
    ft_memcpy(ptr, s1, len);
    return (ptr);
}
int main()
{
    char str[] = "abcd";

    printf("%s\n", ft_strdup(str));
    printf("%s\n", strdup(str));
    printf("%p\n", ft_strdup(str));
    printf("%p\n", strdup(str));
}