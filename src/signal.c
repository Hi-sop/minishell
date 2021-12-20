/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khee-seo <khee-seo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:59:52 by khee-seo          #+#    #+#             */
/*   Updated: 2021/12/20 16:12:56 by khee-seo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void	testfunc(int sig)
{
	sig++; //unused 에러용
	printf("testsig");
	rl_replace_line("", 0);
	exit(0);
}

void	set_signal(void)
{
	signal(SIGINT, testfunc);
	signal(SIGQUIT, SIG_IGN);
}
