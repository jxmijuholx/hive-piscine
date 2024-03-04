/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:21:44 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/18 17:21:27 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    char src[] = "Hello, World!";
    char dest[20] = "meow";

    printf("Original source string: %s\n", src);
    printf("Destination string before copying: %s\n", dest);
    printf("Number of characters copied: %u\n", ft_strlcpy(dest, src, 20));
    printf("Destination string after copying: %s\n", dest);

    return 0;
}
*/