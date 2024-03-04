/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:12:36 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 23:12:46 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(char *str)
{
	int	sign = 1;
	int	num = 0;
	
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
int main(void) {
    char str[] = "   -12345";
    int number = ft_atoi(str);
    printf("Converted number: %d\n", number);
    return 0;
}
*/