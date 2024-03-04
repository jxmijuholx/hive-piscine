/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:11:06 by jamijuhola        #+#    #+#             */
/*   Updated: 2024/02/21 14:21:49 by jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_factorial(int nb)
{
    if (nb == 0  || nb == 1)
    {
        return (1);
    }else if (nb < 0)
    {
        return (0);
    }else
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
}