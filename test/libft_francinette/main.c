/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardopxlcl <rrebolle@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:13:56 by rrebolle          #+#    #+#             */
/*   Updated: 2024/09/23 09:21:02 by rrebolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	const char	*test_str = "Hello123World456!";

	printf("Test string: %s\n", test_str);
	printf("Number of digits: %d\n", count_digits(test_str));
	printf("Number of letters: %d\n", count_letters(test_str));
	return (0);
}
