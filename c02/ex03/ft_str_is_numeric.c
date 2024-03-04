/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>         +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:10:32 by jamijuhola        #+#    #+#             */
/*   Updated: 2022/03/03 18:19:55 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_numeric(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if(!(str[i] >= '0' &&  str[i] <= '9'))
        {
            return (0);
        }
        i++;
    }
    return (i);
}
/*
#include <stdio.h>
int main() {
    char numeric_string[] = "12345";
    char non_numeric_string[] = "123a45";

    if (ft_str_is_numeric(numeric_string)) {
        printf("\"%s\" contains only numeric characters.\n", numeric_string);
    } else {
        printf("\"%s\" does not contain only numeric characters.\n", numeric_string);
    }

    if (ft_str_is_numeric(non_numeric_string)) {
        printf("\"%s\" contains only numeric characters.\n", non_numeric_string);
    } else {
        printf("\"%s\" does not contain only numeric characters.\n", non_numeric_string);
    }

    return 0;
}
*/