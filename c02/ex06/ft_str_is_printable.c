/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:12:18 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 15:19:58 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
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
    char printable_string[] = "Hello, world!";
    char non_printable_string[] = "Hello, \t world!";

    printf("%s: %d\n", printable_string, ft_str_is_printable(printable_string));
    printf("%s: %d\n", non_printable_string, ft_str_is_printable(non_printable_string));

    return 0;
}
*/