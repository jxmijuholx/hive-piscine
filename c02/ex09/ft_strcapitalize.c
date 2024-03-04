/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:21:44 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/17 17:21:27 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
    int     flag;

    flag = 1;
    while (*str != '\0')
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            if (flag == 1)
            {
                if (*str >= 'a' && *str <= 'z')
                {
                    *str -= 32;
                }
                flag = 0;
            }else
            {
                if (*str >= 'A' && *str <= 'Z')
                {
                    *str += 32;
                }
            }
        }else
        {
            flag = 1;
        }
        str++;
    }
    return (str);
}

#include <stdio.h>
int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf("%s\n", str);
    return 0;
}
