/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:22:53 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 14:43:08 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_power(int nb, int power)
{
    int     result;
    int     i;

    result = 1;
    i = 0;
    if (power < 0)
    {
        return (0);
    }else if (power == 0)
    {
        return (1);
    }
    while (i < power)
    {
        result *= nb;
        i++;
    }
    return (result);
}