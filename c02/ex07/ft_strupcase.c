/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:22:19 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 15:50:18 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *ptr;
	
	ptr = str;
	while (*str)
	{
        	if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
    }
	return ptr;
}
/*
#include <stdio.h>
int	 main() {
    char original_string[] = "hello";
	char *result;
	printf("Original before strupcase: %s\n", original_string);
	result = ft_strupcase(original_string);
	printf("Original String: %s\n", original_string);
	printf("Modified String: %s\n", result);
    return 0;
}
*/