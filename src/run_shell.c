/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_shell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:19:55 by khee-seo          #+#    #+#             */
/*   Updated: 2021/12/20 17:21:31 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

/*void	scan_input(char *input)
{
	
}*/

void	inital_screen(void)
{
	char *input;

	while (1)
	{
		input = readline("testshell : ");
		if (!input)
			error("input error");
		if (!(ft_strlen(input)))
		{
			free(input);
			continue ;
		}
		add_history(input);
//		scan_input(input);
		free(input);
	}
}
