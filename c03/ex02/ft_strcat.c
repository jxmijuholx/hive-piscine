/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 10:00:00 by jamijuhola        #+#    #+#             */
/*   Updated: 2021/09/01 10:00:00 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
    int	i;
    int	dest_len;

    i = 0;
    dest_len = 0;
    while (dest[dest_len])
        dest_len++;
    while (src[i])
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }
    dest[dest_len] = '\0';
    return (dest);
}
/*
#include <stdio.h>
int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    
    printf("Before: %s\n", dest);
    ft_strcat(dest, src);
    printf("After: %s\n", dest);
    
    return 0;
}
*/