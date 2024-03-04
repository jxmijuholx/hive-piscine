/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:21:23 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 22:39:57 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char *str)
{
    int     i;

    i  = 0;
    while (*str)
    {
        i++;
        str++;
    }
    return (i);
}
/*
#include <stdio.h>
int main()
{
    char *str = "Broooooo";

    printf("Num of chars in *str: %d\n", ft_strlen(str));
}
*/