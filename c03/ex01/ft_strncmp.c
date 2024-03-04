/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:04:30 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 23:09:08 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hell";

    printf("Comparison result: %d\n", ft_strncmp(str1, str2, 4));

    return 0;
}
*/