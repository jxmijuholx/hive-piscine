/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:09:58 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 15:11:20 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_uppercase(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if((!(str[i] >= 'A' && str[i] <= 'Z')))
        {
            return (0);
        }
        i++;
    }
    return (1);
}
/*
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main() {
    char uppercase_string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char mixed_string[] = "ABCdefGHIJK";

    printf("%s: %d\n", uppercase_string, ft_str_is_uppercase(uppercase_string));
    printf("%s: %d\n", mixed_string, ft_str_is_uppercase(mixed_string));

    return 0;
}
*/