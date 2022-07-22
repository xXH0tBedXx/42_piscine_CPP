/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:17:57 by tasian            #+#    #+#             */
/*   Updated: 2021/11/13 18:06:23 by tasian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for(int j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = ('A' + argv[i][j] - 'a');
			}
			std::cout<<argv[i];
			std::cout<<" ";
		}
		std::cout<<"\n";
	}
	return (0);
}
