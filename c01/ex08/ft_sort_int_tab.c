/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamijuhola <jjuhola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:00:00 by Jamijuhola        #+#    #+#             */
/*   Updated: 2022/09/01 10:00:00 by Jamijuhola       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
    int swapped = 1;
    while (swapped)
    {
        swapped = 0;
        int i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i + 1])
            {
                int temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                swapped = 1;
            }
            i++;
        }
    }
}
/*
#include <stdio.h>

    int main(void)
{
    int arr[] = {5, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_sort_int_tab(arr, size);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
*/