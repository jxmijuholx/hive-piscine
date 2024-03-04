/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:20:35 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 22:39:04 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void       ft_putstr(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    write(1, str, i);
}
/*
int     main(void)
{
    char *string;

    string = "Moro Vepa!";

    ft_putstr(string);
    return 0;
}
*/