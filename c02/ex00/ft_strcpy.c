/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:59:26 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 14:16:57 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int     i;

    i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = src[i];
	return (dest);
}
/*
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_strcpy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}
*/