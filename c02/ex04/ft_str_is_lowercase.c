/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:06:04 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 15:09:45 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_lowercase(char *str)
{
    int     i;

    i = 0;
	while(str[i])
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    char lowercase_string[] = "abcdefghijklmnopqrstuvwxyz";
    char mixed_string[] = "abcdefGHIJK";

    printf("%s: %d\n", lowercase_string, ft_str_is_lowercase(lowercase_string));
    printf("%s: %d\n", mixed_string, ft_str_is_lowercase(mixed_string));

    return 0;
}*/