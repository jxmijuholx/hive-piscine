/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:44:08 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 14:10:45 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_iterative_factorial(int nb)
{
    int     factorial;

    factorial = 1;
    if (nb <= 0 || nb > 12)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    while (nb > 0)
    {
        factorial *= nb;
        nb--;
    }
    return (factorial);
}