/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libcount.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardopxlcl <rrebolle@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:13:56 by rrebolle          #+#    #+#             */
/*   Updated: 2024/09/23 09:21:02 by rrebolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(const char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			count++;
		str++;
	}
	return (count);
}

int	count_letters(const char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			count++;
		str++;
	}
	return (count);
}
