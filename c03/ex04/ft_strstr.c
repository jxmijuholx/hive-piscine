/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:04:30 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 23:09:08 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    char    *haystack;
    char    *needle;

    if (*to_find == '\0')
    {
        return (str);
    }
    while (*str)
    {
        haystack = str;
        needle = to_find;
        while (*needle != '\0' && *str == *needle)
        {
            str++;
            needle++;
        }
        if (*needle == '\0')
        {
            return (haystack);
        }
        str = haystack + 1;
    }
    return (0);
}
/*
#include <stdio.h>
int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    char to_find[] = "quick";
    printf("Result: %s\n", ft_strstr(str, to_find));
    return 0;
}
*/