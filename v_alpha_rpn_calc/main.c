#include "rpn_calc.h"

int	main(int ac, char **av)
{
	if (ac == 2 && check_input(av[1]))
		rpn_calc(av[1]);
	else
		printf("Error\n");
	return (0);
}
