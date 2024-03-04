/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:45:46 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/20 22:02:28 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    print_chars(char i, char j, char k)
{
    putchar(i + '0');
    putchar(j + '0');
    putchar(k + '0');
}

void    ft_print_comb(void)
{
    int    i;
    int    j;
    int    k;

    i = 0;
    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                print_chars(i, j, k);
                if (i != 7 || j != 8 || k != 9) {
                    putchar(',');
                    putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
}
