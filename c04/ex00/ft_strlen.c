/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:14:14 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 23:14:18 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while(*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
/*
#include <stdio.h>
int main(void) {
    char str[] = "Hello, world!";
    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
*/