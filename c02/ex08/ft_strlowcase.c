/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:30:12 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 15:31:50 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strlowcase(char *str)
{
    char    *ptr;
    
    ptr = str;
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str += 32;
        }
        str++;
    }
    return (ptr);
}
/*
#include <stdio.h>
int main() {
    char test_string[] = "Hello, World!";
    printf("Original string: %s\n", test_string);
    printf("Lowercased string: %s\n", ft_strlowcase(test_string));
    return 0;
}*/