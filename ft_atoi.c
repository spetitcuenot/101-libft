/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   atoi.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: spetitcu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 16:13:01 by spetitcu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 16:13:03 by spetitcu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int nombre;
	int moins;

	i = 0;
	moins = 0;
	nombre = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	moins = i;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nombre = nombre * 10 + (str[i] - 48);
		i++;
	}
	if (str[moins] == '-')
		nombre = -nombre;
	return (nombre);
}
