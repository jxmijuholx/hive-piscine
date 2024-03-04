/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:00:00 by jamijuhola        #+#    #+#             */
/*   Updated: 2021/09/28 10:00:00 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int		i;
    int		dest_len;

    i = 0;
    dest_len = 0;
    while (dest[dest_len])
        dest_len++;
    while (src[i] && i < nb)
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
/*
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[20] = "Hello ";
	char src[] = "World!";
	unsigned int nb = 3;

	ft_strncat(dest, src, nb);

	printf("Concatenated string: %s\n", dest);

	return (0);
}
*/